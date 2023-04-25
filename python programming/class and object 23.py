class  Test:
	def isprime(self,n):
		f=0
		for i in range(2,int(n/2)+1):
			if n%i==0:
				f+=1
		if f==0:
			return True
		else:
			return False
n=int(input("enter no of term:-"))
obj=Test()
if obj.isprime(n):
	print("prime no:-")
else:
	print("not prime no:-")