import sys
import serial


if __name__ == "__main__":
    query = sys.argv
    print query
    s = serial.Serial('/dev/ttyACM0', 9600)
    s.write('%s %s ' % (query[1], query[2]))
