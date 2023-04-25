#prgm to find subarry present or not whoose sum is equal to target--->
def largest_sum(l,target):
	start=0
	end=1
	c_sum=l[0]
	for i in range(0,len(l)):
		if c_sum==target:
			return True
		if c_sum<target and end<len(l):
			c_sum+=l[end]
			end+=1
		while c_sum>target and start<end:
			c_sum-=l[start]
			start+=1
	return False
	
			
	
	

l=eval(input("enter data :-"))
m=int(input("enter target:-"))
print(largest_sum(l,m))
			
			
			
	