import serial
import time

#UART config
ser = serial.Serial("/dev/ttyS0",baudrate=9600)

ser.write(b'A')

#wait for 5 sec to recieve
start_time = time.time()
received_data = None
while time.time() - start_time < 100:
	if ser.in_waiting:
		received_data = ser.read()
		break
		
#Handle time out event if data is not received with 5 sec
if received_data == b'S' :
	f = open("/home/islam_pi/GUI/build-FOTA_ver1-Desktop-Debug/CheckFPStatus.txt","w")
	f.write("1")
elif received_data == b'F':
	f = open("/home/islam_pi/GUI/build-FOTA_ver1-Desktop-Debug/CheckFPStatus.txt","w")
	f.write("0")

else:
	print(received_data)
	f = open("/home/islam_pi/GUI/build-FOTA_ver1-Desktop-Debug/CheckFPStatus.txt","w")
	f.write("5")
	print("Timeout occured. No data received.")

f.close()
ser.close()


