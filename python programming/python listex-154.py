def add_list(l1,l2):
	res=[]
	for x,y in zip(l1,l2):
		res.append(x+y)
	return res
	
l1=eval(input("enter list1:-"))
l2=eval(input("enterlist2:-"))
print(add_list(l1,l2))