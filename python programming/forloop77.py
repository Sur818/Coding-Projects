n=int(input("enter no of term:-"))
print("enter first term and common ratio of gp saprated by space:-")
a,r=map(int,input().split(' '))
sum=0
for k in range(1,n+1):
	print(f'1/{a}',end='')
	sum+=1/a
	a*=r
	if k<n:
	 print(' + ',end='')
print("\nsum of seriese=",sum)
	