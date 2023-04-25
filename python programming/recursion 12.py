def max_element(l,n,temp):
	if n<=0:
		return temp
	else:
		if l[n-1]>temp:
			return max_element(l,n-1,l[n-1])
		else:
			return max_element(l,n-1,temp)

n=int(input("enter how many data want to enter:-"))
l=[int(input(f"l[{i+1}]=")) for i in range(n)]
print("max element in list:-",max_element(l,len(l),0))
		