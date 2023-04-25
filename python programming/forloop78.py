import math
n=int(input("no of term:-"))
k=n
sum=0
for i in range(1,n+1):
	m=math.pow(i,k)
	print(f'{i}^{k}',end='')
	sum+=m
	k-=1
	if i<n:
	   print(" + ",end='')
print("\n sum of seriese=",sum)
	   
	  
	 
