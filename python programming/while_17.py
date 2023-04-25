import math
n=int(input("enter no:-"))
dig=int(math.log10(n))
print(dig)
first=n//(math.pow(10,dig))
last=n%10
prod=first*last
print("product of first and last no:-",prod)