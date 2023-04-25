n=int(input("input range:-"))
import functools
def func(a,b):
	return a*b

def fact(x):
	if x!='0':
		return functools.reduce(func, [x for x 		in range(1,int(x)+1)])
	else:
		return 0

for i in range(1,n+1):
	ans=sum(list(map(fact,str(i))))
	if ans==int(i):
		print(i)