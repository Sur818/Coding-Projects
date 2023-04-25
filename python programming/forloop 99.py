n=int(input("enter range:-"))
sum=0
k=1
for i in range(1,n+1):
	m=k*k
	print(f'{k}^2',end='')
	if i<n:
		print(" + ",end='')
	sum+=m
	k+=2
print('\n sum of seriese=',sum)