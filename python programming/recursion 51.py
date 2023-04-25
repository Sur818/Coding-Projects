import math
k=1
def seriese1(sum1,n,i):
	global k
	if i>n:
		return sum1
	print(k,end='')
	if i<n:
		print("+",end="")
	k+=1
	return seriese1(sum1+k-1,n,i+1)


def seriese(n,sum,i):
	if i>n:
		return sum
	sum1=seriese1(0,i,1)
	print(f'/{i}',end='')
	if i<n:
		print(" + ",end='')
	return seriese(n,sum+sum1/i,i+1)
n=int(input("enter no of term:-"))
print("sum of seriese=",seriese(n,0,1))
