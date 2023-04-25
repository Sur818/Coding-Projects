def indexbased_longestcommn(l,k):
	curr=[l[0]]
	res=[]
	for i in range(1,len(l)):
		if l[i][k]>l[i-1][k]:
			curr.append(l[i])
			if len(curr)>len(res):
				res=curr
					
		else:
			curr=[l[i]]
			
	return res
			
#l=eval(input("enter list:-"))
l=['gfg','is','best','for','geeks', 'and','cs']
k=int(input("enter index:-"))
print(indexbased_longestcommn(l,k))
			