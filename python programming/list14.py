l=[]
print("program to find no of duplicate element present in array:------")
n=int(input("enter range:-"))
l=[int(input(f"l[{x+1}]=")) for x in range(n)]
s=set(l)
count=0
for x in s:
	f=l.count(x)
	if f>1:
		count+=1
print("no of duplicate element in list:-",count)