f=open("file51.txt",'w+')
f.write("suraj singh is my name")
#cursor at end of sentence to cursor move to zero
f.seek(0)
a=f.read()
print(a)
#cursor at end of sentence
f.seek(0)
b=f.read()
print(b)