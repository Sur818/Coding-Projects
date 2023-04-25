f=open("file8.txt",'w+')
f.write("this is suraj singh")
f.seek(0)
print(f.read())
word=input("which word want to replace:-")
word1=input("from which word:-")
f.seek(0)
a=f.read()
a=a.split(' ')

for x in a:
	if x==word:
		i=a.index(x)
		a[i]=word1
f.seek(0)
f.write(" ".join(a))
f.seek(0)
print(f.read())