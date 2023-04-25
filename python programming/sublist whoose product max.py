import functools
def func(l):
	return max(l,key=lambda x:functools.reduce(lambda a,b:a*b,x))




l=eval(input("enter nested list"))
print("list of lists whoose product is max:-")
print(func(l))