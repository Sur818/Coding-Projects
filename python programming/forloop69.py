import math
n=int(input("enter no of term:-"))
sum=0
for i in range(1,n+1):
	temp=(i+1)
	m1=math.pow(temp,temp)
	m2=math.pow(i,i)
	temp=m1-m2
	sum=sum+i/temp
	print(f'{i}/{i+1}^{i+1}-{i}^{i}',end='')
	if i<n:
		print(' + ',end='')
print('\n sum of seriese=',sum)
	