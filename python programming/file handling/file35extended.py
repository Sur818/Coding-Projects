def Text_rev(pert_latter):
	f=open("Story3.txt",'r')
	a=f.read().split(' ')
	#print(a)
	for x in a:
		if x[0].upper()==pert_latter.upper():
			i=a.index(x)
			a[i]=x[::-1]
	print(" ".join(a))

pert_latter=input("enter pert_latter which word want to reverse:-")
Text_rev(pert_latter)
f=open("file35updated",'w')
f.write(a)
			
	