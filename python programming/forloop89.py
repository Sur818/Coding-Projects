n=int(input("enter no of term:-"))
k=1
sum=0
for i in range(1,n+1):
	print(f'{k}/{k+1}',end='')
	sum+=k/(k+1)
	if i<n:
		print(' + ',end='')
	k+=2
print("\n sum if seriese=",sum)
	