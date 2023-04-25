def common_element(l):
	res=l[0]
	for x in l[1::]:
		res=list(set(res).intersection(set(x)))
	return res






l=eval(input("enter nested list:-"))
print(common_element(l))