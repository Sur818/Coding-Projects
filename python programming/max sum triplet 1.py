#i<j<k
#l[i]<l[j]<l[k]
def maximum_sumtriplets(l,n):
	ans=0
	for i in range(1,n-1):
		max_left=0
		max_right=0
		for j in range(i+1,n):
			if l[j]>l[i]:
				max_right=max(max_right,l[j])
		for j in range(0,i):
			if l[j]<l[i]:
				max_left=max(max_left,l[j])
		if max_left and max_right:
			ans=max(ans,max_left+max_right+l[i])
	return ans
	
l=eval(input("enter list:-"))
print(maximum_sumtriplets(l,len(l)))
			
			
			