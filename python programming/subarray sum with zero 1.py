def subarray_sumzero(l,c_sum):
	dict={}
	for i in range(len(l)):
		c_sum+=l[i]
		if c_sum==0:
			return l[0:i+1]
		elif c_sum in dict:
			start=dict[c_sum]+1
			return l[start:i+1]
		dict[c_sum]=i
	return l[start:end+1]
	
l=eval(input("enter list:-"))
print(subarray_sumzero(l,0))
			
			
	