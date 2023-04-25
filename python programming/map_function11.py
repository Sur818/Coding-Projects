def fact(n):
	n=int(n)
	f=1
	for i in range(1,n+1):
		f=f*i
	print(f'factorial of no{n}=',f)
	
l=[]
n=int(input("how many data want to enter:-"))
for i in range(n):
		data=int(input("enter data:-"))
		l.append(data)
list(map(fact,l))
		
