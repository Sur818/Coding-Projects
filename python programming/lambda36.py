import math
n=input("enter no:-")
sum_n=sum(list(map(lambda x: int(x), n)))
prod_n=math.prod(list(map(lambda  x:int(x),n)))
if sum_n==prod_n:
	print("spy no::")
else:
	print(" not spy no:-")