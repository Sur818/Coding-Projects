import math
n=int(input('enter no of term:-'))
sum=0
ans=0
for i in range(1,n+1):
	term=1
	print(f'{i}/',end='')
	k=2
	while term<=i:
		f=0
		for j in range(1,k+1):
			if k%j==0:
				f+=1
		if f<=2:
			print(k,end='!')
			if term<i:
				print('+',end='')
			term+=1
			sum+=math.factorial(k)
		k+=1
	if i<n:
		print(' + ',end='')
	ans=ans+i/sum
	sum=0
print('\n sum of seriese',ans)
		
			
	
	