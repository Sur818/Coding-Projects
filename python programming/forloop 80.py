import math
n=int(input("no of term:-"))
sum=0
i=1
k=n
for j in range(1,n+1):
	m=math.pow(i,k)
	print(f'{i}^{k}',end='')
	sum+=m
	k-=1
	i*=2
	if j<n:
	   print(" + ",end='')
print("\n sum of seriese=",sum)
	   
	  
	 
