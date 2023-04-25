def susccesive_rowdiff(l):
	res=[]
	prev=set(l[0])
	for x in l:
		res.append(list(set(x).difference(prev)))
		prev=set(x)
	return res

l=eval(input("enter nested list:-"))
print(susccesive_rowdiff(l))