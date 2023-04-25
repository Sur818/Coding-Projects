n=int(input("enter range:-"))
import functools
def func(a,b):
	return a*b
print("factorial of given no:-")
for i in range(1,n+1):
	print(functools.reduce(func, [x for x in 		range(1,i+1)]))
