import math
a=eval(input("enter coff of x^2:-"))
b=eval(input("enter coff of x:-"))
c=eval(input("enter const:-"))
D=b*b-4*a*c
temp=math.sqrt(D)
x1=(-b+temp)/2
x2=(-b-temp)/2
print("x1=",x1,'x2=',x2)
if D>0:
	print("distinct root")
elif  D==0:
	print("equla root")
else:
  print("complex root")