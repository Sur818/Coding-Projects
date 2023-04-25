class  Test:
	def __init__(self,name,city):
		self.name=name
		self.city=city
	def data(self):
	 	print("name=",self.name)
	 	print("name=",self.city)
class child(Test):
	 def __init__(self,age,country):
	 	self.age=age
	 	self.country=country
	 	print('child')
	 def setdata(self,name,city):
	 	self.name=name
	 	self.city=city
	 	super().__init__(name,city)
	 def cdata(self):
	 	print('age=',self.age)
	 	print('country=',self.country)

c=child(20,'india')
c.setdata('suraj','kanpur')
c.data()
c.cdata()
	