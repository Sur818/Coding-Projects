def getmax_min(tup,k):
	tup=sorted(tup)
	return tuple((tup[i],tup[-(i+1)]) for i in range(k))
	

l=eval(input("enter tuple:-"))
k=int(input("enter no of elements:-"))
print(getmax_min(l,k))
		
	
	