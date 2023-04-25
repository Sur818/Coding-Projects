#program to calulate electric field due to --->
import math
q=eval(input("enter charge in culoumb"))
r=eval(input("enter diatance where electric field in m"))
b=8.85e-12
print(b)
a=1/(4*(math.pi)*b)
b=(q/(r*r))
E=a*b
print("electric field due to poin charge:-",E)
