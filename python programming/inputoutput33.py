import math
ro=eval(input("enter volume charge density:-"))
r=eval(input("distance where you want to calculate EF:-"))
R=eval(input("enter radius of non conducting solid sphere::"))
if r>R:
 q=ro*4/3*math.pi*R*R*R
 temp=q/(r*r)
 E=9*(10**9)*temp
 print("Electric field due to solid sphere =",E)
else:
	q=ro*4/3*math.pi*r*r*r
	temp=q/(r*r)
	E=9*(10**9)*temp
	print('Electric field due to solid sphere:-',E)