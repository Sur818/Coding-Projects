def split_list(data_list,n):
	for i in range(0,len(l),n):
		yield data_list[i:i+n]	
	
l=eval(input("enter data:-"))
n=int(input("enter  spliting length:-"))
print(tuple(split_list(l,n)))
