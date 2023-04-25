import math
n=int(input("enter no of term:-"))
sum=0
list=[]
k=1
for i in range(1,n+1):
	for x in list:
		k=math.prod(list)*i
	print(f'{k}',end='')
	if i<n:
		print(' + ',end='')
	list.append(k)
	sum+=k
print("\n sum of seriese=",sum)