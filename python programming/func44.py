import math
def func_arms(n):
	sum=0
	for x in n:
		sum+=math.pow(int(x),3)
	if sum==int(n):
		return True
	else:
		return False
		
	
n=input("enter no:-")
if(func_arms(n)):
	print("armstrong no::")
else:
	print("not armstrong no:-")

