import math
def krishna(s):
	sum=0
	for x in s:
		sum+=math.factorial(int(x))
	if sum==int(s):
		return True
	else:
		return False
	
n=input("enter no:-")
if krishna(n):
	print("yes!")
else:
	print("no!")
	