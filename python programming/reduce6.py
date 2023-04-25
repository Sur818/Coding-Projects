#program to find factorail of a no:-.
n=int(input("enter a no:-"))
import functools
def func(a,b):
	return a*b
print("factorial of given no:-")
print(functools.reduce(func, [x for x in range(1,n+1)]))