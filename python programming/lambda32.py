#prgm to find range ofstrong:-
import math
n=int(input("enter range:-"))
print("strong no in given range:---")
for i in range(1,n+1):
	i=str(i)
	l=(" ".join(i)).split(' ')
	ans=sum(list(map(lambda x:math.			factorial(int(x)),l)))
	if ans==int(i):
		print(i)
	


	