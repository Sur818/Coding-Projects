n=int(input("enter no:-"))
print('first term and c.r are:-')
a,r=map(int,input().split(' '))
sum=0
for i in range(n):
	print(f'1/{a}',end='')
	sum+=1/a
	if i<n-1:
		print(" + ",end='')
	a*=r
print("\n sum if seriese=",sum)
	
	
	