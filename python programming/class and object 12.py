class Test:
	def __init__(self,n):
		self.n=n
	def natural_no(self):
		sum=0
		for i in range(1,(self.n)+1):
			print(i,end=" ")
			sum+=i
		return sum
	def odd_natural(self):
		sum=0
		for i in range(1,(self.n)+1,2):
			print(i,end=" ")
			sum+=i
		return sum
	def even_natural(self):
		sum=0
		for i in range(2,(self.n)+1,2):
			print(i,end=" ")
			sum+=i
		return sum

n=int(input("enter range:-"))		
obj=Test(n)
print("natural no in given range:-")
print("\n sum=",obj.natural_no())
print("even natural no in given range:-")
print("\n sum=",obj.even_natural())
print("add natural no in given range:-")
print("\n sum=",obj.odd_natural())
		
		
	
	