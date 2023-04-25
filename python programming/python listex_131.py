def count_samefreqpair(l,n):
	ele=[]
	freq=[]
	for x in set(l):
		ele.append(x)
		freq.append(l.count(x))
	return(ele,freq)
		





l=eval(input("enter list:-"))
print(count_samefreqpair(l,len(l)))