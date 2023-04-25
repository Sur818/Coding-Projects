class Test:
	def __init__(self,n):
		self.n=n
	def sum_digit(self):
		sum=0
		for x in self.n:
			sum+=int(x)
		return sum
n=input("enter no:-")
obj=Test(n)
print("\n sum of digit =",obj.sum_digit())
