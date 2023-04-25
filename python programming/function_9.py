def fact(n):
	fact=1
	for i in range(1,n+1):
		fact*=i
	print("factorial of no ",n,'=',fact)
for x in range(1,10):
 fact(x)