#count triplet such that i<j<k and l[i]<l[j]<l[k]---->
def triplet(l):
	res=0
	for i in range(len(l)-2):
		j=i+1
		k=len(l)-1
		while j<k:
			res+=(k-j)
			j+=1
	return res
		
	
		
l=eval(input("enter list:-"))
print(triplet(l))		
			
			
		