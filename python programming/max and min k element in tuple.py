def max_mink(tup,k):
	tup=sorted(tup)
	return list(((tup[i],tup[-(i+1)]) for i in range(k)))
	
	
tup=eval(input("enter tuple:-"))
k=int(input("no of max min element:-"))
print(max_mink(tup,k))
	