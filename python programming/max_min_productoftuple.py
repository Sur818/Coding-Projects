def prod(x):
	prod=1
	for i in x:
		prod*=i
	return prod




def tuple_max_min(l):
	return (max(prod(x) for x in l),min(prod(x) for x in l))




l=eval(input("enter tuples of data inequally:-"))
print(tuple_max_min(l))