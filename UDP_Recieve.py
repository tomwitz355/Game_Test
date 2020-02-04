import socket
import sys

UDP_IP = "25.93.140.161"
UDP_PORT = int(str(sys.argv[1]))

numloop = int(str(sys.argv[2]))

sock = socket.socket(socket.AF_INET, # Internet
                     socket.SOCK_DGRAM) # UDP

try:
    sock.bind((UDP_IP, UDP_PORT))
except:
    sock.bind((UDP_IP, UDP_PORT+1))



for i in range(numloop):
    data, addr = sock.recvfrom(1024) # buffer size is 1024 bytes
    print(data)
