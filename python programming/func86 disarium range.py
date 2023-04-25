import math
def disarium_no(s):
	sum=0
	for  i in range(len(s)):
		sum+=math.pow(int(s[i]),i+1)
	if sum==int(s):
		return True
	else:
		return False

n=int(input("enter range:-"))
for i in range(1,n+1):
	if disarium_no(str(i)):
		print(i)
		