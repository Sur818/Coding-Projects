res=[]
def get_uniqueval(data):
	for x in data:
		if isinstance(x,tuple):
			 get_uniqueval(x)
		else:
			if x not in res:
				res.append(x) 
	return res
	
	
l=eval(input("enter nested tuple:-"))
print(get_uniqueval(l))		
		
		
			