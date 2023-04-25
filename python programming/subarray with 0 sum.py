def subarray_sumzero(l,c_sum):
	start=0
	end=-1
	dict={}
	for i in range(len(l)):
		c_sum+=l[i]
		if c_sum==0:
			end=i
			break
		elif c_sum in dict:
			start=dict[c_sum]+1
			end=i
			break
		dict[c_sum]=i
	return l[start:end+1]
	
l=eval(input("enter list:-"))
print(subarray_sumzero(l,0))
			
			
		