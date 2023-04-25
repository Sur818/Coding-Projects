def max_mink(tup,k):
	res=[]
	for idx,val in enumerate(sorted(tup)):
		if idx<k or idx>=len(tup)-k:
			res.append(val)
	return tuple(res)
		
		
	
tup=eval(input("enter tuple:-"))
k=int(input("no of max min element:-"))
print(max_mink(tup,k))
	