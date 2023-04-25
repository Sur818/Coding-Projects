#prgm to find length of  largest subarray whoose sum is equal to target:---->
def largest_subarrayTar(l,m):
	c_sum=0
	dict={}
	maxlen=0
	for i in range(len(l)):
		c_sum+=l[i]
		dict[c_sum]=i
		#special case------>
		if c_sum==m:
			maxlen=max(maxlen,i+1)

		if c_sum-m in dict:
			maxlen=max(maxlen,i-dict[c_sum-m])
	return maxlen

	
l=eval(input("enter data:-"))
m=int(input("enter no of target:-"))
print("maxlength=",largest_subarrayTar(l,m))