class Test:
	def reverse_no(self,n):
		return n[::-1]
	def swap_digit(self,n):
		return n[-1]+n[1:-1]+n[0]
obj=Test()
n=input("enter no::")
print("after reverse the no:-")
print(obj.reverse_no(n))
print("swaping first and last digit of no:-")
print(obj.swap_digit(n))