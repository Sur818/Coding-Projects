import math
n=int(input('enter range of prime:-'))
k=1
sum=0
for i in range(1,n+1):
	f=0
	for j in range(1,i+1):
		if i%j==0:
			f+=1
	if f<=2:
		if i<=n and k!=1:
			print(' + ',end='')
		print(f'{k}/',end='')
		print(f'{i}^{k}',end='')
		sum+=k/math.pow(i,k)
		k+=1
print('\n sum of seriese=',sum)
			
	