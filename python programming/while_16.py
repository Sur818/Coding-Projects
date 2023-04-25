import math
n=int(input("enter any no:-"))
string=str(n)
dig=len(string)
first=n//math.pow(10,dig-1)
last=n%10
a=math.pow(10,dig-1)
print(a)
b=n%a
print(b)
n=b//10
print(n)
ans=last*(math.pow(10,dig-1))+(n*10+first)
print(int(ans))