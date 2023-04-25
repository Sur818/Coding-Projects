def target_sum(l,m):
	dict={}
	c_sum=0
	for i in range(len(l)):
		c_sum+=l[i]
		if c_sum==m:
			return l[0:i+1]
		
		elif dict.get(c_sum):
			temp=dict[c_sum-m]+1
			return l[temp:i+1]
			
		dict[c_sum]=i
	return "Not found"
		
		
l=eval(input("enter nested list:-"))
target=int(input("enter target value:-"))
print(target_sum(l,target))
		
	
		
	