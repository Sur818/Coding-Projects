def product(a,b,c):
	return a*b*c
l1=[]
n=int(input("how many data want to enter in container 1:-"))
for i in range(n):
	data=int(input(f'l1[{i}]='))
	l1.append(data)
l2=[]
n=int(input("how many data want to enter:-"))

for i in range(n):
	data=int(input(f"l2[{i}]="))
	l2.append(data)
l3=[]
n=int(input("enter data want to enter:-"))
for i in range(n):
	data=int(input("enter data -"))
	l3.append(data)
print(list(map(product,l1,l2,l3)))
	
	