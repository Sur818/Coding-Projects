import math
n=int(input("enter no of term:-"))
sum=0
ans=0
for i in range(1,n+1):
	for j in range(1,i+1):
		print(j,end='')
		if j<i:
			print('+',end='')
		sum+=j
	print(f'/{i}',end='!')
	if i<n:
		print(' + ',end='')
	ans+=sum/math.factorial(i)
	sum=0
print('\n sum of seriese=',ans)
	
