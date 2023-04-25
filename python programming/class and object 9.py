class Test:
	a=10
	def f1(self):
		b=20
		print("f1 is calling:-",self.a)
	def f2(self):
		print("f2 is calling",)#b is not calling
obj=Test()
#print(obj.a)
obj.f1()
obj.f2()