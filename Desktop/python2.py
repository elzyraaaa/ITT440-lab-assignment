import socket

s = socket.socket()

port = 8888

s.connect(('192.168.28.3', port))

data = s.recv(1024)

print(data)


s.close()
