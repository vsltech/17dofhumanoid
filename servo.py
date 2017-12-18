#import required libraries
import serial
import struct
#from visual import *
#import numpy as np

#Start the serial port to communicate with arduino
data = serial.Serial('com11',9600, timeout=1)

while (1==1):
    pos = input("Enter a number: ") #Prompt the user for the angle
    data.write(struct.pack('>B',pos)) #code and send the angle to the Arduino through serial port
