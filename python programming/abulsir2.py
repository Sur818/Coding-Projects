# 1 2 1 2 1 4 1 16 1 256....
#next=prod of alternate previous
import math
l=[2]
c=int(input("enter position of term:-"))
if c%2!=0:
	print(1)
else:
	for n in range(1,c):
		if n==2:
		   l.append(2)
		elif n%2==0:
			p=math.prod(l)
			l.append(p)
	print(l[-1])
	