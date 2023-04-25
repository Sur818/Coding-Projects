def decor(func):
	def inner(a,b):
		if b!=0:
			func(a,b)
		else:
			print("it can not divisible by zero")
	return inner
		


@decor
def div(a,b):
	print(a/b)

div(10,20)
div(10,2)
div(10,0)