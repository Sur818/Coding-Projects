import functools
def func(a,b):
	return a*10+b
print(functools.reduce(func, [1,2,3]))