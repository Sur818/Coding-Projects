def tuple_max_min(nums):
	res_max=max(nums,key=lambda x,x[0],x[1])
	res_min=min(nums,key=lambda x:x[0],x[1])
	return (res_max,res_min)
	

	
		
	
l=eval(input("enter tuples of data:-"))
print(tuple_max_min(l))
	
	
	
	
	
	
	
	
	
	
	
	
	