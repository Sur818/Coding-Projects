class Test:
	a=10
	def f1(self):
	#	self.b=10
		c=10
		print('f1 in parent :-')
class child(Test):
		def f2(self):
			print("a=",self.a)
			#print("b=",self.b)
			#print("C=",c)
obj=child()
obj.f2()
obj.f1()
		
		