def strongest_adjecent(l,n):
	for i in range(n-1):
		res=max(l[i],l[i+1])
		print(res,end="")
		
l=eval(input("enter list:-"))
strongest_adjecent(l,len(l))