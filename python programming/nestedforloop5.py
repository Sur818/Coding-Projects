n=int(input("enter no of term:-"))
ans=0
sum=0
for i in range(1,n+1):
	sum=0
	for j in range(1,i+1):
		print(j,end='')
		sum+=j
		if j<i:
			print("+",end='')	
	print(f'/{i}',end='')
	if i<n:
		print(' + ',end='')
	ans=ans+sum/i
	sum=0
print('\n sum of seriese=',ans)

	