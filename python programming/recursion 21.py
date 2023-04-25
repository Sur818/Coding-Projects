import math
arms=0
def armstrong(n):
	if n==0:
		return globals()['arms']
	globals()['arms']=globals()['arms']+math.pow(n%10,3)
	return armstrong(n//10)
n=int(input("enter no:-"))
ans=armstrong(n)
if ans==n:
	print("armstrong no:-")
else:
	print("not armstrong no:-")
