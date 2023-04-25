def extract_key(l):
	res=[]
	for x in l:
		for y in x.keys():
			res.append(y)
	return set(res)
	
l=eval(input("enter list of dictionary:-"))
print(extract_key(l))