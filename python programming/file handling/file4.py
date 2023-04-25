f=open("file.txt",'w')
print(f.tell())
f.write("hello my name is suraj singh\n")
print("cursor=",f.tell())
f=open("file.txt",'r+')
print("cursor=",f.tell())
a=f.read()
print(a)
print(f.tell())
f.write("hello my name is vishal kumar")
print(f.tell())
print(f.seek(0))
a=f.read()
print(a)
print(f.tell())
# on opening file cursor always pointed to be zero---->
#after reading and writing operation the cursor pointed to end of the statement
#on applying rading compiler read after cursor pointing------>
