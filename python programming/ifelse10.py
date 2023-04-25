import math
a=int(input("enter coff of x^2:-"))
b=int(input("enter coff of x:-"))
c=int(input("enter const:-"))
temp=b*b-4*a*c
D=math.sqrt(temp)
if D>0:
	print("real and distinct root:-")
elif D<0:
	print("complex root:-")
else :
	print("real and equal root:-")
