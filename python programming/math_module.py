import math
def strong(n):
	sum=0
	for x in str(n):
		sum=sum+math.factorial(int(x))
	if sum==n:
		return True
		
for x in range(1,200000+1):
	if strong(x):
		print(x,"is strong")
