import functools
def func(a,b):
	return a*b

n=int(input("enter no of term:-"))
l=[int(input(f"l[{x+1}]=")) for x in range(n)]
print(functools.reduce(func,l))