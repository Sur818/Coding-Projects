class Test:
	def f(self):
		print("hello")
	def f2(self):
		print("bye")
	def f3():
		print("static")
obj=Test()
obj.f()
obj.f2()
Test.f3()

