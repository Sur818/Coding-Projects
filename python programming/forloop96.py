import math
n=int(input("enter no of term:-"))
sum=0
for i in range(1,n+1):
	m=int(math.pow(i,2))
	print(f'{m}',end='')
	if i<n:
		print(' + ',end='')
	sum+=m
print('\n sum of seriese',sum)
	
	 
	 