#print(i/(n+(i-1)*d + i/(i*n+(i-1)*d + i/(i*n+(i-1)*d) + -----)
n=int(input("enter no of term:-"))
sum=0
d=int(input('enrer constant common difference:-'))
for i in range(1,n+1):
	print(f'{i}/{i}*{n}+{i-1}*{d}',end='')
	if i<n:
		print(" + ",end='')
	sum+=i/((i*n)+(i-1)*d)
print("\n sum of seriese:-",sum)
