class palindrome:
	def f1(self,s):
		if s[::-1]==s:
			return True
		else:
			return False
obj=palindrome()
n=int(input("enter no:-"))
if obj.f1(str(n)):
		print("palindrome")
else:
		print("not palindrome:-")
		