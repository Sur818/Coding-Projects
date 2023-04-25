class Circle:
	def area(self,a,b):
		self.area=a*b
		return self.area
	def perim(self,a,b):
		self.perim=2*(a+b)
		return self.perim
	
obj=Circle()
print(obj.area(10,10))
print(obj.perim(10,30))
	