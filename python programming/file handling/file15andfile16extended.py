f=open("file15.txt",'r')
a=f.read()
f.close()
f=open("file16.txt",'r')
b=f.read()
f.close()
f=open("file15.txt",'w')
f.write(b)
f=open("file16.txt",'w')
f.write(a)