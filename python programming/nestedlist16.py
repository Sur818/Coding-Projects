def sublist_maxsum(l):
	res=max(l,key=sum)
	return res
	
	

l=eval(input("enter nested list:-"))
print("print list of lists whoose sum is max:--")
print(sublist_maxsum(l))











#----------------------
#func=lambda x:x[0]--->func_name
#func(parmeters)--
#----------------------