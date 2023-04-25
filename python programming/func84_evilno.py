def evil_no(n):
	if bin(n).count('1')%2==0:
		return True
	else:
		return False
	
n=int(input("enter no:-"))
if evil_no(n):
	print("yes evil no:-")
else:
	print("not evil no:-")
	