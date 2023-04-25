a=int(input("enter length of first side of trangle:-"))
b=int(input("enter length of second side of trangle:-"))
c=int(input("enter length of 3rd side of trangle:-"))
if a==b and a==c:
	print("equilatrle trangle:-")
elif a==b or b==c or c==a:
	print("issoseles trangle:-")
else:
	print(" scalene trangle:-")