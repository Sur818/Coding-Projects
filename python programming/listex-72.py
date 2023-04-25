l=eval(input("enter data:-"))
l1=[]
for x in l:
	if type(x)==type([]):
		for data in x:
			l1.append(data)
	else:
		l1.append(x)
print(l1)
del(l)