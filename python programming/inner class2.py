class Test:
	class inner:
		def f1(self):
			print('f1')
	def f2(self):
			print('f2')
			
	

	
t=Test()
o=t.inner()
o.f1()
t.f2()
#or--------second method
#a=Test.inner()
#a.f1()
