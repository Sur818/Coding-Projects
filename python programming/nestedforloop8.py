n=int(input('enter no of term:-'))
i=1
sum=0
ans=0
k=1
term=1
while term<=n:
	f=0
	for j in range(2,int(k/2+1)):
		if k%j==0:
			f=1
	if f==0:
		for j in range(1,i+1):
			print(j,end='')
			if j<i:
				print('+',end='')
			sum+=j
		print(f'/{k}',end='')
		ans=ans+sum/k
		sum=0
		if term<n:
			print(' + ',end='')
		i+=1
		term+=1
	k+=1
		
print('\b\nsum of seriese=',ans)
		
			
	
	
		
	