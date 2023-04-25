class frequency_digit:
	def f1(self,n):
		dict={}
		for x in n:
			f=n.count(x)
			dict[f"frq of{x}="]=f
		return dict
		
n=input("enter no of term:-")
obj=frequency_digit()
print(obj.f1(n))
				