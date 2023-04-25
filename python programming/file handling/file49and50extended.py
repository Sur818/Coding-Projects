with open("file49.txt") as f1,open("file50.txt") as f2:
	a=f1.readlines()
	b=f2.readlines()
	for line_a,line_b in zip(a,b):
		if len(line_a)<len(line_b):
			i=a.index(line_a)
			a[i]=line_b
print("here bigger line of both text aded same as next file")
f=open("file49and50updated.txt",'w')
f.writelines(a)
			
			
