def split_list(data_list,n):
	return(data_list[::n],data_list[n::])
	
l=eval(input("enter data:-"))
n=int(input("enter length of first list:-"))
print(split_list(l,n))
	