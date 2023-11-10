import time
import serial
import glob
# yellow
# hex = open("blinkLed.hex", "r")
# red
file_name = glob.glob('/home/islam_pi/Downloads/*.hex')[0]

hexf = open(file_name, "r")
print(file_name)
end = "END\n"
ttl = serial.Serial('/dev/ttyS0', 9600, 8, 'N', 1)
lines = hexf.readlines()
lineNumber = len(lines)
line = 0
while (line < lineNumber) :
   print(lines[line])
   for char in lines[line]:
      ttl.write(char.encode())
      ttl.read_until(b'k',1)
   while(ttl.in_waiting < 1):
      pass
   response = ttl.read(ttl.in_waiting)
   if(response == b'k'):
      line +=1

   else:
      pass 
time.sleep(.5)
for char in end:
   ttl.write(char.encode())
   ttl.read_until(b'k',1)
   print(char)
 
