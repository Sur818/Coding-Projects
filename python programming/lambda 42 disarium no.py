import math
n=input("enter no:-")
ans=sum(list(map(lambda x ,i:math.pow(int(x),i),n,[i for i in range(1,int(n)+1)])))
if ans==int(n):
	print("disarium no:-")
else:
	print("not disarium no:")