n=int(input("enter size:-"))
l=[]
l=[int(input(f"l[{x}]=")) for x in range(n)]
print("element present in odd times:----")
s=set(l)
for x in s:
	f=l.count(x)
	if f%2!=0:
		print(x)
	
