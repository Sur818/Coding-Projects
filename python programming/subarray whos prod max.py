def subarray_prodmax(l,n):
	max_ending=1
	min_ending=1
	max_prod=0
	for i in range(n):
		if l[i]>0:
			max_ending=l[i]*max_ending
			min_ending=min(l[i]*min_ending,1)
		elif l[i]<0:
			temp=max_ending
			max_ending=max(min_ending*l[i],1)
			min_ending=temp*l[i]
			
			
		else:
			max_ending=1
			min_ending=1
		max_prod=max(max_prod,max_ending)
	return max_prod
			
l=eval(input("enter list:-"))
print(subarray_prodmax(l,len(l)))
		
	
	