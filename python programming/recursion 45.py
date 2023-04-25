import math
def isprime(n,i):
	if i>n/2:
		return True
	if n%i==0:
		return False
	return isprime(n,i+1)

def seriese(n,sum,i,k):
	if i>n:
		return sum
	if isprime(k,2):
		if i<=n and k!=2:
			print('+',end='')
		print(f'{k}!/{i}',end='')
		return seriese(n,sum+math.factorial(k)/i,i+1,k+1)
	return seriese(n,sum,i,k+1)

n=int(input("enter no of term of seriese:-"))
print("\n sum of seriese=",seriese(n,0,1,2))
	
		
	
	