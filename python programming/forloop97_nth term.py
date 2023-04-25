n=int(input("enter which  term you want to get?:-"))
sum=0
k=1
d=2
a=3
for i in range(1,n):
	print(k,',',end='')
	k+=a
	a+=d
print(f'\n{n}th term=',k)