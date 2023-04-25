f=open("file10.txt",'r')
a=f.read()
word=input("which word  want to delete:-"
)
l=[]
a=a.split(' ')
for x in a:
	if x!=word:
		l.append(x+" ")
f.close()
f=open("file10.txt",'w+')
f.writelines(l)
f.seek(0)
print(f.read())