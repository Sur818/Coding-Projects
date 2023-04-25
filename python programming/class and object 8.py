class Test:
	def f1(self):
		print("suraj singh")
	def f2(self):
		print("hello")
	def f3(self):
		self.f2()
		self.f1()
		

obj=Test()
obj.f3()