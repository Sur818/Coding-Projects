n=int(input("enter no if term:-"))
i=1
sum=0
for k in range(1,n+1):
	print(i,end='')
	if k<n:
		print(' + ',end='')
	sum+=i
	i*=2
print("\nsum of seriese=",sum)