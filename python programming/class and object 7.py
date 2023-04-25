class Test:
	def data(self,a,b):
		self.a=a
		self.b=b
	def add(self):
		print("sum=",self.a+self.b)
	def sub(self):
		print("product=",self.a-self.b)
obj=Test()
obj.data(10,20)
obj.add()
obj.sub()