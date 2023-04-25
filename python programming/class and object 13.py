class No_digit:
	def setdata(self,n):
		self.n=n
	def count_digit(self):
		return len(self.n)

n=input("enter no:-")
obj=No_digit()
obj.setdata(n)
print("no of digit =",obj.count_digit())