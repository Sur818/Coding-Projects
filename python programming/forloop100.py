n=int(input("enter no of term:-"))
sum=0
for i in range(1,n+1):
	m=i*i
	print(f'{i}^2',end='')
	if i<n:
		print(' + ',end='')
	sum+=m
print("\n sum if seriese=",sum)