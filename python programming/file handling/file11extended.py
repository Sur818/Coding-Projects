f=open("file11.txt",'r+')
a=f.read()
print(a)
word=input("which word want to delete:-")
a=a.replace(word,"")
print(a)
f.close()
f=open("file11.txt","w")
f.write(a)
f.close()

