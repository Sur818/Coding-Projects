def fact(n):
 s=1
 for x in range(1,n+1):
  s*=x
 return s

def strong(n):
	sum=0
	for x in str(n):
		sum=sum+fact(int(x))
	if sum==n:
		return True
		
for x in range(1,200000+1):
	if strong(x):
		print(x,"is strong")
