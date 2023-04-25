n=int(input('enter no of term:-'))
sum=0
for i in range(1,n+1):
	prod=1
	for j in range(1,i+1):
		print(j,end='')
		if j<i:
			print('*',end='')
		prod=prod*j
	if i<n:
		print(' + ',end='')
	sum+=prod
print("\n sum of seriese=",sum)
	