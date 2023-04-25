class student:
	def setinformation(self):
		self.name=input("enter name:-")
		self.age=int(input("enter age:-"))
		self.roll_no=int(input("enter rollno:-"))
		self.getinformation()
	
	def getinformation(self):
		print("name=",self.name)
		print("age=",self.age)
		print("roll_no=",self.roll_no)
	

obj=student()
obj.setinformation()

