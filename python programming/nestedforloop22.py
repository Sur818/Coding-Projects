n=int(input("enter no of term:-"))
sum=0
sum1=0
for i in range(1,n+1):
	term=1
	k=1
	while term<=i:
		print(k,end='')
		if term<i:
			print('+',end='')
		term+=1
		sum+=k
		k+=2
	print(f'/{k}',end='')
	sum1+=sum/k
	if i<n:
		print(' + ',end='')
	sum=0
print('\n sum of seriese=',sum1)
		
		
