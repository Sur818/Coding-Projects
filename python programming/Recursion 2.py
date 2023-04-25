def fabonacci(n):
	if n<=1:
		return n
	else:
		return fabonacci(n-1)+fabonacci(n-2)
	
n=int(input("enter no of term:-"))
for i in range(0,n+1):
		print(fabonacci(i))
		