n=int(input("enter range:-"))
sum=0
for i in range(1,n+1,2):
	m=i*i
	print(f'{i}^2',end='')
	if i<n:
		print(" + ",end='')
	sum+=m
print('\n sum of seriese=',sum)
	
	
	