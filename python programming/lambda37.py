import math
n=int(input("enter range:-"))
print(" spy no in given range:-")
for i in range(1,n+1):
	s=str(i)
	sum_n=sum(list(map(lambda x: int(x), 	s)))
	prod_n=math.prod(list(map(lambda  		x:int(x),s)))
	if sum_n==prod_n:
		print(i)