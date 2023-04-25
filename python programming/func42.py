def isprime(n):
	f=0
	for i in range(1,n+1):
		if n%i==0:
			f+=1
	if f<=2 and n!=1:
		return True
	else:
		return False
	
n=int(input("enter range:-"))
sum=0
for i in range(1,n+1):
	if(isprime(i)):
		print(i)
		sum+=i
print("sum of all prime no in given range:-",sum)