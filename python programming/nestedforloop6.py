n=int(input("enter no of term:-"))
sum=0
ans=0
for i in range(1,n+1):
	for j in range(1,i+1):
		fact=1
		print(j,end='!')
		for k in range(1,j+1):
			fact=fact*k
		sum=sum+fact
		if j<i:
			print('+',end='')
	print(f'/{i}',end='')
	if i<n:
		print( ' + ',end='')
	ans=ans+sum/i
	sum=0
print('\n sum of seriese=',ans)
	

		
		
