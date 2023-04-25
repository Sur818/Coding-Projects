n=int(input("enter no of term:-"))
sum=0
for i in range(1,n+1):
	print(f'1/{i}',end='')
	sum+=1/i
	if i<n:
	 print(' + ',end='')
print("sum of seriese=",sum)
