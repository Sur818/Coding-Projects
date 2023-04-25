def func_extract(l,key):
	res=[]
	for dict in l:
		if key in list(dict.keys()):
			res.append(dict)
	return res
		




l=eval(input("enter list of dictionary:-"))
key=eval(input("enter key="))
print(func_extract(l,key))
