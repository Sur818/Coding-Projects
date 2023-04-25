n=int(input("enter no of term:-"))
print("enter first term and common diffrence in Ap")
a,d=map(int,input().split(' '))
print("enter first term and common ratio in gp")
a1,r=map(int,input().split(' '))
sum=0
for k in range(1,n+1):
	if k%2!=0:
		print(a,end='')
		sum+=a
		a+=d
	else:
		print(a1,end='')
		sum+=a1
		a1*=r
	if k<n:
		print(" + ",end='')
print('\nsum of seriese=',sum)
 
