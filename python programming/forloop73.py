n=int(input("enter no of term:-"))
print('1',end=' + ')
sum=1
i=2
j=3
for k in range(2,n+1):
	if k%2==0:
		print(j,end='')
		sum+=j
		j*=3   
	else:
		print(i,end='')
		sum+=i
		i*=2
	if k<n:
		print(" + ",end='')
print("\nsum of seriese=",sum)
		
	