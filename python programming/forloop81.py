n=int(input("enter no of term:-"))
print("enter first term and common diffrence of ap:-")
a1,d=map(int,input().split(' '))
print("enter first term and common ratio of gp:-")
sum=0
a2,r=map(int,input().split(' '))
for k in range(n):
	if k%2!=0:
		print(f'1/{a1}',end='')
		sum+=1/a1
		a1+=d
	else:
		print(f'1/{a2}',end='')
		sum+=1/a2
		a2*=r
	if k<n-1:
		print(" + ",end='')
print('\n sum if seriese=',sum)