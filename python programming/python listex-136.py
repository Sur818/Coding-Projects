def sort(l):
	int_part=sorted([x for x in l if type(x) is int])
	str_part=sorted([x for x in l if type(x) is str])
	return int_part+str_part


l=eval(input("enter list items:-"))
print(sort(l))