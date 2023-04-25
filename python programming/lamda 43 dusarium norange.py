#prgm help to find all disarium no in given range:--
import math
n=int(input("enter no:-"))
for i in range(1,n+1):
	l=str(i)
	ans=sum(list(map(lambda x ,i:math.		pow(int(x),i),l,[i for i in range(1,int(n)+		1)])))
	if ans==int(i):
		print(i)