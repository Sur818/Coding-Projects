from collections import Counter
def func(l):
	mappd=Counter(l)
	print(mappd)
	return [key*mappd[key] for key in mappd]
	
l=eval(input("enter list:-"))
print(func(l))