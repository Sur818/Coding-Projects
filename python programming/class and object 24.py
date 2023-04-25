class Test:
	sum=0
	def isprime(self,n):
		f=0
		for i in range(2,int(n/2)+1):
			if n%i==0:
				f+=1
		if f==0:
			return True
		else:
			return False
	
	def prime(self,n):
		for i in range(1,n+1):
			if self.isprime(i):
				print(i)
				self.sum+=i
		




n=int(input("enter range:-"))
obj=Test()
obj.prime(n)
print("\n sum=",obj.sum)
