class Factorial:
	def f1(self, n):
		fact=1
		for i in range(1,n+1):
			fact*=i
		return fact

n=int(input("enter no:-"))
obj=Factorial()
x=obj.f1(n)
print("\n factorial of no=",x)
	