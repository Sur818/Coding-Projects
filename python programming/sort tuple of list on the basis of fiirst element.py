def sort_tuple(l):
	return sorted(l,key=lambda x:int(x[0][-1]))
	
l=eval(input("enter content:-"))
print("sort tuple of content on the basis of first item:-")
print(sort_tuple(l))
