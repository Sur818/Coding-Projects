class Factor:
	def setdata(self,n):
		self.n=n
	def f1(self):
		for i in range(1,int(self.n/2+1)):
			if self.n%i==0:
				yield i

obj=Factor()
n=int(input("enter no:-"))
print("factor of given no:-")
obj.setdata(n)
x=list(obj.f1())
for i in x:
		print(i)
		