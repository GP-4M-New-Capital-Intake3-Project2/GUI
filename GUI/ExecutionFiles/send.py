import serial, time, glob, os
'''
CRC function 
simulate STM32F4 CRC 32 bit register 
'''
def CalculateCrc(data):
   crc = 0xffffffff 
   data = (bytearray(data.encode()))
   # add dumy '0' if the record less than N*32 bit
   extra = (4-(len(data)%4))
   if extra == 4:
      extra = 0
   for x in range(0, extra):
      data.append(48)
   # calculate crc 
   for x in data:
      crc ^= (int(x) << 24) 
      for k in range(8):
         crc = (crc << 1) ^ 0x04c11db7 if crc & 0x80000000 else crc << 1
   crc &= 0xffffffff
   return crc
##############################################################
# change here for the file name
##############################################################
file_name = glob.glob('/home/islam_pi/Downloads/*.hex')[0]
hashfile_name = glob.glob('/home/islam_pi/Downloads/*.txt')[0]

hexf = open(file_name, "r")
print(file_name)##############################################################

end = "END\n" # end of hex file indication 

ttl = serial.Serial('/dev/ttyS0', 9600, 8, 'N', 1)
'''
read hex file 
fetch line by line 
calculate crc 
send data+crc
Wait to receive confirmation after each byte
Wait for the confirmation check after each record
'''
lines = hexf.readlines()
lineNumber = len(lines)
line = 0
while (line < lineNumber) :
   print(lines[line])
   recordCrc = CalculateCrc(lines[line][:-1])
   # make sure that crc is 32 bit
   recordCrc = recordCrc | 0x1000000000
   recordCrc = bytearray((str(hex(recordCrc))[2:]).encode())
   for char in lines[line]:
      if(char != '\n'):
         ttl.write(char.encode())
         ttl.read_until('k',1)
      else:
         for char in str(recordCrc.decode()[-8:]):
            ttl.write(char.encode())
            ttl.read_until('k',1)
         ttl.write(b'\n')
         ttl.read_until('k',1)
   while(ttl.in_waiting < 1):
      pass
   response = ttl.read(ttl.in_waiting)
   if(response == b'k'):
      line +=1
   else:
      pass 

'''
at the end send "END" to inform the target that you finished
'''
time.sleep(.5)
for char in end:
   ttl.write(char.encode())
   ttl.read_until('k',1)
   print(char)

f = open("/home/islam_pi/GUI/build-FOTA_ver1-Desktop-Debug/Enabled.txt","w")
f.write("1")
os.remove(file_name)
os.remove(hashfile_name)
