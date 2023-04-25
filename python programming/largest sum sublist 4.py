#prgm to find sublist whoose sum is max:----->
def longestlength_sum(l):
	c_sum=0
	max_sum=0
	j=0
	k=0
	for i in range(len(l)):
		c_sum=c_sum+l[i]
		if c_sum>max_sum:
			max_sum=c_sum
			k=i
		if c_sum<0:
			c_sum=0
			j=i+1
	return max_sum


l=eval(input("enter data:-"))
print(longestlength_sum(l))