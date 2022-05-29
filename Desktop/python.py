import socket

s = socket.socket()
print("Socket successfully created!")

port = 8888

s.bind(('', port))
print("socket binded to " + str(port))

s.listen(5)
print("socket is listening")

while True: 
	c, addr = s.accept()
	print("Got connection from " + str(addr))
	
	c.send(b'Thank you for connecting!')	
c.close()



