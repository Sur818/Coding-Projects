import math
sum1=0
def isprime(n,i):
	if i>n/2:
		return True
	if n%i==0:
		return False
	return isprime(n,i+1)



def seriese(n,sum,i,k):
	global sum1
	if i>2*n-1:
		return sum
	if isprime(k,2) :
		print(f'{i}^{k}/{i}!',end="")
		if i<2*n-1:
			print(" + ",end='')
		sum1=math.pow(i,k)/math.factorial(i)
		return seriese(n,sum+sum1,i+2,k+1)
	return seriese(n,sum,i,k+1)
n=int(input("enter range:-"))
print("\n sum of seriese=",seriese(n,0,1,2))
	
	