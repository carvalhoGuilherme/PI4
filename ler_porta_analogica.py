import serial
import time
 
ser = serial.Serial('/dev/ttyACM1', 9600)
while True:
    arduino = ser.readline()
    print(arduino)
    time.sleep(0.1)
ser.close()    