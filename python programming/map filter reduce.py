n=input("enter no-")
import functools
def func(a,b):
	return a*b

def fact(x):
	if x!='0':
		return functools.reduce(func, [x for x 		in range(1,int(x)+1)])
	else:
		return 0
	
ans=sum(list(map(fact,str(n))))
if ans==int(n):
	print("strong no:-")
else:
	print("not strong no:-")
