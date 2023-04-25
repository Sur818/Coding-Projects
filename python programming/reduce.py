import functools
def func(a,b):
	return a+b

l=[10,20,30,40,50]
print(functools.reduce(func,l))