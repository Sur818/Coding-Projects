class Test:
	def add(self,a,b):
		self.sum=a+b
	def multiply(self,a,b):
		self.multi=a*b
	
obj=Test()
obj.add(10,20)
obj.multiply(10,20)
print(obj.sum)
print(obj.multi)


