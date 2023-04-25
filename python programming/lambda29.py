import math
s=input("enter no:-")
l=(" ".join(s)).split(' ')
ans=sum(list(map(lambda x:math.factorial(int(x)),l)))
if ans==int(s):
	print("strong no:-")
else:
	print("not strong no:-")
