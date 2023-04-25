class student:
	def student_data(self,stu_name,stu_class):
		self.stu_name=stu_name
		self.stu_class=stu_class

obj=student()
obj.student_data("suraj","12th")
print("name=",obj.stu_name,"class=",obj.stu_class)
	