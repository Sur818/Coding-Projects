def maxsum_nestedlist(l):
	return max(l,key=lambda x:sum(x))
	



l=eval(input("enter nested list:-"))
print(maxsum_nestedlist(l))