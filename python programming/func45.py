import math
def func_arms(n):
	sum=0
	for x in n:
		sum+=math.pow(int(x),3)
	if sum==int(n):
		return True
	else:
		return False
		
n=input("enter range:-")
for i in range(1,int(n)+1):
	if func_arms(str(i)):
		print(i)
	
