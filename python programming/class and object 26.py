class  Armstrong:
	sum=0
	def f1(self,n):
		sum=0
		for x in n:
			sum+=int(x)*int(x)*int(x)
		if sum==int(n):
			return True
		else:
			return False
	def f2(self,n):
		for i in range(1,n+1):
			if self.f1(str(i)):
				print(i)
				self.sum+=i
n=int(input("enter range:-"))
obj=Armstrong()
obj.f2(n)
print("sum=",obj.sum)

				
	
	



