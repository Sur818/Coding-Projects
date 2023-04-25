def split_list(data_list,n):
	size=int(len(l)/n)
	for i in range(0,len(l),n):
		yield data_list[i:i+n]	
	
l=eval(input("enter data:-"))
n=int(input("enter equal spliting part:-"))
print(tuple(split_list(l,n)))