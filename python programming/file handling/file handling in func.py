def create_file():
	f=open("file_func.txt",'w')
	text=input("enter text in file:-")
	f.write(text)
	f.close()

def read_file():
	f=open("file_func.txt",'r')
	a=f.read()
	print(a)


op=int(input("1:create file\n2:read file\n0:exit\n"))
while op!=0:
	if op==1:
		create_file()
	if op==2:
		read_file()
	op=int(input("enter choice:-"))
	
	