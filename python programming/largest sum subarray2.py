def largestsum_sublist(l):
	c_sum=0
	max_sum=0
	for i in range(len(l)):
		c_sum=c_sum+l[i]
		if c_sum>max_sum:
			max_sum=c_sum	
		if c_sum<0:
			c_sum=0
	return max_sum






l=eval(input("enter data:-"))
print("largest sum continous subarray:-")
print(largestsum_sublist(l))