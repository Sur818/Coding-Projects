class HCF:
	gcd=1
	def f1(self,n1, n2):
		for i in range(1,min(n1,n2)+1):
			if n1%i==0 and n2%i==0:
				self.gcd=i
				
obj=HCF()
n1,n2=map(int,input("enter two no").split(' '))
obj.f1(n1,n2)
print("gcd=",obj.gcd)
