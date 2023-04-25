def  seriese_recursion(n,sum):
	if n<=0:
		return sum
	print(n,end='')
	if n-2>0:
		print("+",end='')
	return seriese_recursion(n-2,sum+n)
n=int(input("enter no of term:-"))
print('\n sum of seriese=',seriese_recursion(n,0))

	