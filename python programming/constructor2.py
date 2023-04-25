class Ractangle:
	def __init__(self,a,b):
		self.a=a
		self.b=b
	def area(self):
		A=self.a*self.b
		print("Area of ractangle=",A)
	def perimeter(self):
		P=2*(self.a+self.b)
		print("permeter of Ractangle=",P)
n1,n2=map(int,input("enter length amd width of circle:- ").split())
obj=Ractangle(n1,n2)
obj.area()
obj.perimeter()
