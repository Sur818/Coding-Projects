f=open("file17.txt",'w+')
f.write(input("enter string:-"))
f.seek(0)
a=f.read()
b=a.split(' ')
for x in b:
	if x==x[::-1]:
		a=a.replace(x,"")
		
print(a)


