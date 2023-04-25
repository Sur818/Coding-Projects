class Test:
	a=10
	def __init__(self,name):
		self.name=name
	def f1(self):
		print("f1 is calling:-",self.a)
	def f2(self):
		print("f2 is calling",self.name)#b is not calling
obj=Test("suraj")
#print(obj.a)
obj.f1()
obj.f2()