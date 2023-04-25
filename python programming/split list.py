def split_list(l,n):
	res=[list(l[i:i+n]) for i in range(0,len(l),n)]
	return res
	
l=eval(input("enter list:-"))
n=int(input("enter spliting size:-"))
print(split_list(l,n))
	
	
	