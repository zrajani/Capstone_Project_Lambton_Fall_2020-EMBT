## Import Modules required 
from time import sleep
import serial
from curses import ascii

##set serial
ser = serial.Serial()

##Set port connection to USB port GSM modem 
ser.port = '/dev/ttyO4'

## set older phones to a baudrate of 9600 and new phones and 3G modems to 115200
ser.baudrate = 9600
##ser.baudrate = 115200
ser.timeout = 1
ser.open()

## Function to send SMS 
def sendsms(number,text):
    ser.write('AT+CMGF=1\r\n')
    sleep(2)
    ser.write('AT+CMGS="%s"\r\n' % number)
    sleep(2)
    ser.write('%s' % text)
    sleep(2)
    ser.write(ascii.ctrl('z'))

## Function Called with suitable parameters sent
sendsms('+16477868334','Letter arrived in the box')
