def decor(func):
	def inner(n):
		if n%2==0:
			func(n)
		else:
			print(n," is odd")
	return inner


@decor
def no(n):
	print(n," is even")

n=int(input("enter range:-"))
for i in range(1,n+1):
	no(i)