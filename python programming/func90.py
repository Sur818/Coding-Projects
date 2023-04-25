def isprime(n):
	f=0
	for i in range(1,n+1):
		if n%i==0:
			f+=1
	if f<=2:
		return True
	else:
		return False
		
		
		
def twin_prime(n):
	for i in range(1,n+1):
		if isprime(i) and isprime(i+2):
			print(i,i+2)
	
n=int(input("enter range:-"))
print("all twin prime in given range are:-")
twin_prime(n)