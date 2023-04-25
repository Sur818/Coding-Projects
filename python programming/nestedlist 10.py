def sublist_lenmax(l,m):
	length=-1
	for x in l:
		if sum(x)==m:
			length=max(length,len(x))
	return length
	
	

l=eval(input("enter nested list:-"))
m=int(input("enter target value:-"))
print("length of largest list whoose sum is equal to taregt",sublist_lenmax(l,m))


				
		
		
		
		
	
	
		









