n=int(input("enter no of term:-"))
a=int(input("enter no:-"))
sum=0
for i in range(1,n+1):
	print(f'1/{a*i}',end='')
	if i<n:
	 print(" + ",end='')
	sum+=1/(a*i)
print("sum of serise=",sum)
	
	