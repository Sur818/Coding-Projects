def add(a,b):
	return a+b

l1=[]
n=int(input('how many data want to enter:-'))
for i in range(n):
	data=int(input("enter data:-"))
	l1.append(data)

l2=[]
n=int(input("how many data want to enter in container 2:-"))
for i in range(n):
	data=int(input("enter data:-"))
	l2.append(data)
	
print(list(map(add,l1,l2)))

	