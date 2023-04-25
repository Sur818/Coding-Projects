n=int(input("enter no of term:-"))
sum1=0
for i in range(1,n+1):
	k=1
	term=1
	sum=0
	while term<=i:
		print(k,end='')
		if term<i:
			print('+',end='')
		sum+=k
		k+=2
		term+=1
	sum1+=sum/i
	print(f'/{i}',end='')
	if i<n:
		print(' + ',end='')
print('\n sum if seriese',sum1)
		
		
		