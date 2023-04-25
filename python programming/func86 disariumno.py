import math
def disarium_no(s):
	sum=0
	for  i in range(len(s)):
		sum+=math.pow(int(s[i]),i+1)
	if sum==int(s):
		return True
	else:
		return False
		
n=int(input("enter no:-"))
if disarium_no(str(n)):
	print("yes disarium no:-")
else:
	print("not disarium no:-")