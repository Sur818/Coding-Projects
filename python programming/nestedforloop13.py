n=int(input("enter no of term:-"))
ans=0
for i in range(1,n+1):
	term=1
	k=2
	sum=0
	while term<=i:
		f=0
		for j in range(2,int(k/2)+1):
			if k%j==0:
				f=1
		if f==0:
			term+=1
			print(k,end='')
			sum+=k
			if term<=i:
				print('+',end='')
		k+=1	
	print(f'/{i}',end='')
	if i<n:
		print(' + ',end='')
	ans=ans+sum/i
	
print('\n sum of seriese=',ans)

			
				
			
			
			
				
				
	
	