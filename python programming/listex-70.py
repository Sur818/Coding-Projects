l=input("enter strings:-").split(' ')
op='y'
while True:
	l1=[]
	if op=='y':
		char=input("enter charecter to check item start with this charecter:- ")
		for x in l:
			if x[0]==char:
				l1.append(x)
		print(l1)
	if op=='n':
		exit(0)
	op=input("want to continue[y/n]:-")
	