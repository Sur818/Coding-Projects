def remove_tuple(l,k):
	return [x for x in l if len(x)!=k]
		
l=eval(input("enter list of tuples:-"))
k=int(input("enter length of tuple you want to remove"))
print(remove_tuple(l,k))