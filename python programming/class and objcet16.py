class Test:
	prod=1
	def product_digit(self,n):
		for x in n:
			self.prod*=int(x)
		return self.prod
	
obj=Test()
n=input("enter no:-")
print("product of digits:-")
print(obj.product_digit(n))