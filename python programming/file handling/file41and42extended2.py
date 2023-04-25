with open("file41.txt",'r') as f1,open('file42.txt','r') as f2:
	a=f1.read()
	b=f2.read()
	print("union of  two file:-")
	l=[]
	for x in a.split(' '):
		if x not in b.split(' '):
			l.append(x)
	print(x+" "+b)