import math
n=int(input("enter no of term:-"))
print("enter first term and c.d ofmaking seriese:-")
a,d=map(int,input().split(' '))
sum=0
string1=1
m1=1
for i in range(1,n+1):
	m2=math.pow(i,i)+a
	print(f'{string1}/',end='')
	string=f'{i}^{i}'+f'+{a}'
	print(f'{string}',end='')
	sum+=m1/m2
	string1=string
	a+=d
	m1=m2
	if i<n:
	   print(" + ",end='')
print("\n sum of seriese=",sum)
	 
	 
	
	
	