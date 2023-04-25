class student:
	name=[]
	age=[]
	roll_no=[]
	def setinformation(self,n):
		for i in range(n):
			print(f"enter details of studentno {i+1}:-")
			self.name.append(input("enter name:-"))
			self.age.append(int(input("enter age:-")))
			self.roll_no.append(int(input("enter rollno:-")))

	
n=int(input("how many students are:-"))
obj=student()
obj.setinformation(n)
nam=input("enter student name to get details:-")
for i in range(n):
	if obj.name[i]==nam:
		print("name=",obj.name[i])
		print("age=",obj.age[i])
		print("rollno=",obj.roll_no[i])

