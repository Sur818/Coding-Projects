class sphere:
 def setdata(self,r):
  self.r=r
 def area(self):
  A=4*3.14*self.r*self.r
  print("Area of sphere",A)
 def volume(self):
  V=(4/3)*3.14*self.r*self.r*self.r
  print("volume of sphere= ",V)

r=int(input("enter radius:-"))
obj=sphere()
obj.setdata(r)
obj.area()
obj.volume()
