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
	
n=input("enter no:-")
if strong_no(n):
	print("strong no:-")
else:
	print("not strong no")

	
	


