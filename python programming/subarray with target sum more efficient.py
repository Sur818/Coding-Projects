#first subarry whoose sum is equal to target::->>>>>>
def target_sum(l,m):
	dict={}
	c_sum=0
	start=0
	end=-1
	for i in range(len(l)):
		c_sum+=l[i]
		dict[c_sum]=i
		if c_sum==m:
			end=i
			break
		elif dict.get(c_sum-m):
			start=dict[c_sum-m]+1
			end=i
			break
	if end!=-1:
		return l[start:end+1]
	else:
		return "Not found"
		
		
l=eval(input("enter nested list:-"))
target=int(input("enter target value:-"))
print(target_sum(l,target))
		
	
		
			
		
		
		
		
	
				
				
				