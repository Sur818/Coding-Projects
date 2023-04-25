n=int(input("enter no of term:-"))
sum=0
for i in range(1,n+1):
	k=1
	for j in range(i,0,-1):
		k=k*j

	print(f'{k}',end='')
	if i<n:
		print(" + ",end='')
	sum+=k
print('\nsum of seriese=',sum)
	