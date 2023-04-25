with open("file41.txt",'r') as f1,open('file42.txt','r') as f2:
	a=f1.read()
	b=f2.read()
	print("common word between two file:-")
	for x in a.split(' '):
		if x in b.split(' '):
			print(x)