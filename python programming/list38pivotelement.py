def pivot_element(l,n):
	for i in range(n):
		f=0
		for j in range(i,-1,-1):
			if l[j]<l[i]:
				f=1
		if f==0:
			ans=l[i]
	return ans
	

l=[]
n=int(input("enter no of elements:-"))
l=[int(input(f"l[{x}]=")) for x in range(n)]
print(pivot_element(l,n))




		
		
		