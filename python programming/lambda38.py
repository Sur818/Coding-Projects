def isprime(n):
	f=0
	for i in range(1,n+1):
		if n%i==0:
			f+=1
	if f==2:
		return True
	else:
		return False
		
		
n=int(input("enter range:-"))
l=[x for x in range(1,n+1)]
sum1=sum(list(filter(lambda x : True if isprime(int(x)) else False ,l)))
print("sum of prime no with in range:-",sum1)