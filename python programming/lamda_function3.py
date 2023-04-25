import functools
l=[10,20,30,40,50]
func=lambda a,b:a+b
print(functools.reduce(func,l))
