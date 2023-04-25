def product(l):
	res=[]
	prod=1
	for x in l:
		if x not in res:
			prod=prod*x
			res.append(x)
	return prod

l=eval(input("enter list:-"))
print(product(l))