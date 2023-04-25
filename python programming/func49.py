import math
def sum_digits(s):
	sum=0
	for x in s:
		sum+=math.factorial(int(x))
	return sum
	
def strong_no(s):
	if sum_digits(s)==int(s):
		return True
	else:
		return False
		
n=int(input("enter range:-"))
for i in range(1,n+1):
	if strong_no(str(i)):
		print(i)