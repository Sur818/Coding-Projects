def find_missing(l,n):
	sum=0
	for i in range(n):
		sum+=l[i]
	n=n+1
	return (n*(n+1))/2-sum


n=int(input("enter size:-"))
l=[]
l=[int(input(f"l[{x}]=")) for x in range(n)]
print(int(find_missing(l,n)))
