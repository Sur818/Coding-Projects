def isprime(n):
	f=0
	for i in range(1,n+1):
		if n%i==0:
			f+=1
	if f<=2 and n!=1:
		return True
	else:
		return False