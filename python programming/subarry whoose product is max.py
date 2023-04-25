def longest_subarray(l,n):
	max_overall=l[0]
	max_ending_here=l[0]
	min_ending_here=l[0]
	for i in range(1,n):
		temp=max_ending_here
		max_ending_here=max(l[i],l[i]*max_ending_here,l[i]*min_ending_here)
		min_ending_here=min(l[i],l[i]*temp,l[i]*min_ending_here)
		max_overall=max(max_overall,max_ending_here,min_ending_here)
	return max_overall
		
		

l=eval(input("enter list:-"))
print(longest_subarray(l,len(l)))