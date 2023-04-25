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
	if i>n:
		return sum
	if isprime(k,2) :
		print(f'{i}^{k}',end="")
		if i<n:
			print(" + ",end='')
		sum1=math.pow(i,k)
		return seriese(n,sum+sum1,i+1,k+1)
	return seriese(n,sum,i,k+1)
n=int(input("enter range:-"))
print("\n sum of seriese=",seriese(n,0,1,2))
	
	