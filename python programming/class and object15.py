class Test:
	def product_digit(self,n):
		prod=1
		for x in n:
			prod*=int(x)
		return prod
	
obj=Test()
n=input("enter no:-")
print("product of digits:-")
print(obj.product_digit(n))