def HCF(*a):
	for i in range(1,min(a)+1):
		f=0
		for x in a:
			if x%i!=0:
				f=1
		if f==0:
			ans=i
	return ans
	
	
print(HCF(1,2,3))
		
			
	
		
		
	