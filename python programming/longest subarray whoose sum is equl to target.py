#prgm to find  largest subarray whoose sum is equal to target:---->
def largest_subarrayTar(l,m):
	c_sum=0
	dict={}
	start=0
	end=0
	maxlen=0
	for i in range(len(l)):
		c_sum+=l[i]
		dict[c_sum]=i
		#special case------>
		if c_sum==m and maxlen<(i-start):
			start=0
			end=i+1
			maxlen=end-start
	
		if c_sum-m in dict and maxlen<(i-dict[c_sum-m]):
			start=dict[c_sum-m]
			end=i+1
			maxlen=end-start
			
	return l[start:end]
	
l=eval(input("enter data:-"))
m=int(input("enter no of target:-"))
print("maxlength subarray=",largest_subarrayTar(l,m))
	