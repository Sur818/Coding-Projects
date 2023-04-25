import math
n=int(input('enter range of prime:-'))
sum=0
k=1
for i in range(1,n+1):
	f=0
	for j in range(1,i+1):
		if i%j==0:
			f+=1
	if f==2:
		if i<=n and k!=1:
			print(' + ',end='')
		print(f'{k}!/{i}',end='')
		sum+=math.factorial(k)/i
		k+=1
print('\n sum of seriese',sum)
		
	
	
	

