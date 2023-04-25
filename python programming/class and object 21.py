class Test:
	gcd=1
	def Lcm(self,n1,n2):
		for i in range(max(n1,n2),n1*n2+1):
			if i%n1==0 and i%n2==0:
				return i
			
	def Hcf(self,n1, n2):
		for i in range(1,min(n1,n2)+1):
			if n1%i==0 and n2%i==0:
				self.gcd=i
				
obj=Test()
n1,n2=map(int,input("enter two no").split(' '))
obj.Hcf(n1,n2)
print("gcd=",obj.gcd)
print("Lcm=",obj.Lcm(n1,n2))
	