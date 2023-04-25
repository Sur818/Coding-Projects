class Circle:
	def setdata(self,r):
		self.r=r
	def area(self):
		A=3.14*self.r*self.r
		print("area of circle=",A)
	def perimeter(self):
		p=2*3.14*self.r
		print("perimeter=",p)
	
obj=Circle()
obj.setdata(3)
obj.area()
obj.perimeter()