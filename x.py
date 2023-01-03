import serial
import time

# setup serial line
ser = serial.Serial('COM3', 9600)
def write(x):
    ser.write(bytes(x,'utf-8'))
    time.sleep(0.05)
while True:
    num = input("On = 1 | Off = 0 | quit = Q")
    value = write(num)
    if num == "Q":
        ser.close()