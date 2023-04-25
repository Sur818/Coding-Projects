#next term is =current term*previous term
n=int(input("enter no of term:-"))
sum=0
k=1
for i in range(1,n+1):
	print(f'{k*i}',end='')
	if i<n:
		print(' + ',end='')
	sum+=k*i
	k=k*i
print("\n sum of seriese=",sum)
