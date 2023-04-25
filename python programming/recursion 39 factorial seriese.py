import math
sum=0
def isprime(n,i):
	if i>n/2:
		return True
	if n%i==0:
		return False
	return isprime(n,i+1)

def prime(n,i):
	global sum
	if i>n:
		return sum
	if isprime(i,2):
		if i<=n and i!=2:
			print("+",end="")
		print(i,end='!')
		sum+=math.factorial(i)
	return prime(n,i+1)
	

n=int(input("enter range:-"))
print("\n sum if seriese=",prime(n,2))
