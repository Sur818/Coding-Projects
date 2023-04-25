def create_tup(l):
	res=[]
	for x in l:
		res.append((x,pow(x,3)))
	return res
	
l=eval(input("enter no-data in list:-"))
print(create_tup(l))
		