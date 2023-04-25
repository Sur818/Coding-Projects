class  Armstrong:
	def f1(self,n):
		sum=0
		for x in n:
			sum+=int(x)*int(x)*int(x)
		if sum==int(n):
			return True
		else:
			return False
	
n=input("enter no to check:-")
obj=Armstrong()
if obj.f1(n):
	print("armstrong no:-")
else:
	print("not armstrong no:-")


