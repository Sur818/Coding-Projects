from statistics import mean
def cumulative_mean(l):
	res=dict()
	for sub in l:
		for key,val in sub.items():
			if key in res:
				res[key].append(val)
			else:
				res[key]=[val]
	for key,num_ in res:
				res[key]=mean(num_)
	return res
 
l=eval(input("enter list of dictionariese:-"))
print(cumulative_mean(l))
				
		
	
	