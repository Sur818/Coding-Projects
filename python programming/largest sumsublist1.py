def largestsum_sublist(l):
	c_sum=0
	m_sum=0
	for i in range(len(l)):
		c_sum+=l[i]
		if c_sum>m_sum:
			m_sum=c_sum
		if c_sum<0:
			c_sum=0
	return m_sum

		
		
l=eval(input("enter no:-"))
print(largestsum_sublist(l))