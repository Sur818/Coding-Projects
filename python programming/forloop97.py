import math
n=int(input("enter no:-"))
sum=2
sign=+1
for i in range(1,n+1):
	m=int(math.pow(i,2))
	print(f'{m}',end='')
	if sign>0 and i<n:
		print(' + ',end='')
	elif sign<0 and i<n:
		print(' - ',end='')
	sum+=(-sign*m)
	sign*=-1
print("\n sum if seriese=",sum)
	