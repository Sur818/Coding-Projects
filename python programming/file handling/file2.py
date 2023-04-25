f=open("first.txt",'w')
#f.writelines("suraj singh")
f.writelines(["this is first line\n",
"this is  second line\n",
"This is third line\n"])
f=open("first.txt",'r')
a=f.read()
#print(a)
#print(f.tell())
print(f.seek(0))#cursor at zero index
#print(a.find("second"))
#print(f.read(25))
#print(f.tell())
print("------------------------------------")
#print(f.read())
print(f.readlines())
#print(f.readline())

a=f.readlines()
for x in a:
	print(x,end="")
	
