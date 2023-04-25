import math
n=int(input("enter range:-"))
print("strong nos in given range:---")
def func(i):
	l=(" ".join(i)).split(' ')
	ans=sum(list(map(lambda x:math.			factorial(int(x)),l)))
	if ans==int(i):
		return True
ans=list(filter(func,[str(x) for x in range(1,n+1) ]))
for x in ans:
	print(x)
	

