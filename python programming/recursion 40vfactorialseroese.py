import math
def seriese(sum,i,n):
	if i>n:
		return sum
	print(f'1/{i}!',end="")
	if i<n:
		print("+",end="")
	return seriese(sum+1/math.factorial(i),i+1,n)
n=int(input("enter range:-"))
print("sum of seriese=",seriese(0,1,n))

	