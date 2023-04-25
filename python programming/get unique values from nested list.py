def get_uniquevalues(l):
	res=[]
	for item in l:
		for x in item:
			if x not in res:
				res.append(x)
	return res
	



l=eval(input("enter nested list:-"))
print(get_uniquevalues(l))
