n=int(input("enter no of term:-"))
sum=0
k=0
for i in range(1,n+1):
	print(i+k,end='')
	sum+=(i+k)
	k+=i
	if i<n:
		print(" + ",end='')
print('\n sum if seriese=',sum)