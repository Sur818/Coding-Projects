l=[]
n=int(input("enter size of array:-"))
l=[int(input(f"l[{x}]=")) for x in range(n)]
no=int(input("enter no want to insert in sorted list:-"))
index=n
for i in range(n):
	if no<l[i]:
		index=i
l.insert(index,no)
print(l)
		
	