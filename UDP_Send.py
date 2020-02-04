import socket
import sys

UDP_IP = "25.93.144.3"
UDP_PORT = int(str(sys.argv[1]))
if(UDP_PORT==5004):
    UDP_IP = "10.104.227.18"
MESSAGE = str(sys.argv[2])

print("UDP target IP:", UDP_IP)
print("UDP target port:", UDP_PORT)
print("message:", MESSAGE)

sock = socket.socket(socket.AF_INET, # Internet
                     socket.SOCK_DGRAM) # UDP
sock.sendto(bytes(MESSAGE.encode()), (UDP_IP, UDP_PORT))
