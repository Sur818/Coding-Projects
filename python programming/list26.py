def mejority_element(l,n):
	for i in range(n-1):
		f=1
		for j in range(i+1,n):
			if l[i]==l[j]:
				f+=1
		if f>n/2:
			print(l[i])
			return
	print("no mezority elements are find:-")
		

n=int(input("enter size:-"))
l=[]
l=[int(input(f"l[{x}]=")) for x in range(n)]
mejority_element(l,n)		