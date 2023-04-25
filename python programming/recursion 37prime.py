def isprime(n,j):
	if j>n/2:
		return True
	if n%j==0:
		return False
	return isprime(n,j+1)
		
		
def prime(n,i):
	if i>n:
		return 
	if isprime(i,2):
		print(i,end=" ")
	return prime(n,i+1)
	
n=int(input("enter range:-"))
prime(n,2)