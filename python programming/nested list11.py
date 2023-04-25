def sublist_lenmax(l,m):
	res="None"
	length=0
	for x in l:
		if sum(x)==m:
			if len(x)>length:
				res=x
				length=max(length,len(x))
	return res
	
	

l=eval(input("enter nested list:-"))
m=int(input("enter target value:-"))
print("largest list whoose sum is equal to taregt",sublist_lenmax(l,m))


				
		
		
		
		
	
	
		









eval(input("enter data:-"))
