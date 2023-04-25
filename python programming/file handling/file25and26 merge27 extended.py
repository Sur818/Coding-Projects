with open("file25.txt") as f1 , open("file26.txt") as f2:
	a=f1.readlines()
	b=f2.readlines()
f=open("file27.txt",'w')
f.writelines(a)
f.write('\n')
f.writelines(b)