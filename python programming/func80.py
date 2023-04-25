import math
def krishna(s):
	sum=0
	for x in s:
		sum+=math.factorial(int(x))
	if sum==int(s):
		return True
	else:
		return False

n=int(input("enter range:-"))
for i in range(1,n+1):
	if krishna(str(i)):
		print(i)