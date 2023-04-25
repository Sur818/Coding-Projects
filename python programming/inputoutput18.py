import math
m=eval(input("enter mass:-"))
x=eval(input("enter angle of inclination in degree:-"))
x=(x/180)*math.pi
mew=eval(input("enter coff of friction:-"))
temp1=m*10*math.sin(x)
temp2=m*10*math.cos(x)
a=temp1-mew*temp2
a=a/m;
print("accn of block along the incline=",a)
if a>0:
 print("block is moving along the incline")
else:
  	print("rest")

