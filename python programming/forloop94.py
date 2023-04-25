n=int(input("enter no of term:-"))
sum=0
for i in range(1,n+1):
	if i%2!=0:
		print(f'1/{i}',end='')
		sum+=1/i
	else:
		print(f'{(i-1)}/{i}',end='')
		sum+=(i-1)/i
	if i<n:
		print(" + ",end='')
else:
		print('\n sum of seriese=',sum)
		print('thank you:-')
		
		
			
		
	
	 
	