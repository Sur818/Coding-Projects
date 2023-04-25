def squre(a):
	return a*a
	
l=[]
n=int(input("how many data want to enter:-"))
for i in range(n):
	data=int(input("enter data:-"))
	l.append(data)
l=list(map(squre,l))
print(l)
	
