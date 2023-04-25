#read txt line by line
f=open("details.txt",'r')
a=f.readlines()
for x in a:
	print(x,end=' ')
