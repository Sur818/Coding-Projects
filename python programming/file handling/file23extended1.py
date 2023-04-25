f=open("file24.txt",'r')
a=f.readlines()
print(a)
words=input("enter words:-").split(' ')
for line in a:
	f=0
	for word in words:
		if word in line:
			f+=1
	if f!=0:
		print(line,end="")

		
			
