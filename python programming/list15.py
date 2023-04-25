l=[]
print("find  duplicate element present in array:-")
n=int(input("enter range:-"))
dup=[]
l=[int(input(f"l[{x+1}]=")) for x in range(n)]
s=set(l)
for x in s:
	f=l.count(x)
	if f>1:
		dup.append(x)
print("no of duplicate element in list:-",dup)