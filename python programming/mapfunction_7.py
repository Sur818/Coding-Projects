def prod(a,b):
	return a*b

l1=[]
n1=int(input("enter how many element enter want to elemen 1:-"))
for i in range(n1):
	data=int(input("enter data:-"))
	l1.append(data)

l2=[]
n2=int(input("enter how many data want to enter:-"))
for i in range(n2):
	data=int(input("enter data:-"))
	l2.append(data)
l=list(map(prod,l1,l2))
print(l)
