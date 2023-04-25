class Test:
	def __init__(self,a,b):
		self.a=a
		self.b=b
	def add(self):
		print("sum=",self.a+self.b)
	def subs(self):
		print("subs=",self.a-self.b)
	def mul(self):
		print("prod=",self.a*self.b)
	def div(self):
		print("div=",self.a/self.b)

t=Test(10,20)
t.add()
t.subs()
t.mul()
t.div()