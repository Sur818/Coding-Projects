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
print("twisted prime no's in given range:---")
for i in range(1,n+1):
	i=str(i)
	if isprime(int(i)) and isprime(int(i[::-1])):
		print(i)