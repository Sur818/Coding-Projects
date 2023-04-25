import math
def seriese1(sum1,n,i):
	if i>n:
		return sum1
	print(i,end='')
	if i<n:
		print("+",end="")
	return seriese1(sum1+i,n,i+1)


def seriese(n,sum,i):
	if i>n:
		return sum
	sum1=seriese1(0,i,1)
	print(f'/{i}!',end='')
	if i<n:
		print(" + ",end='')
	return seriese(n,sum+sum1/math.factorial(i),i+1)
n=int(input("enter no of term:-"))
print("sum of seriese=",seriese(n,0,1))

