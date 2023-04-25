import math
n=int(input("enter no of term:-"))
k=1
sum=0
for i in range(1,n+1):
	print(f'{k}^{k+1}/{k+1}^{k}',end='')
	m1=math.pow(k,k+1)
	m2=math.pow(k+1,k)
	sum+=m1/m2
	if i<n:
		print(' + ',end='')
	k+=2
print("\n sum if seriese=",sum)
	