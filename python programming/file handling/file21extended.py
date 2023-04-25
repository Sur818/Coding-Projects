f=open("file21.txt",'r')
a=[]
for line in f.readlines():
	for word in line.split(' '):
		word=word[0].upper()+word[1::]
		a.append(word+" ")
print(" ".join(a))
f=open("file21updated.txt",'w')
f.writelines(a)
	
