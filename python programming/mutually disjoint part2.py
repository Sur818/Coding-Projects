def mutually_disjointstr(l):
	res=[]
	for idx,subs1 in enumerate(l):
		for subs2 in l[idx+1:]:
			res.append(set(subs1).intersection(set(subs2)))
	return not any(res)
	
l=input("enter strings:-").split(' ')
print(mutually_disjointstr(l))
			
			
			