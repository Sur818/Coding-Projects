class Test:
	class inner:
		def f1(self):
			print('f1')
	#m=inner()
	#m.f1()
	
t=Test()
o=t.inner()
o.f1()

#or--------second method
#a=Test.inner()
#a.f1()
