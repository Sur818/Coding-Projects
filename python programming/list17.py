l=[]
print("program to find no of unique element present in array:------")
n=int(input("enter range:-"))
l=[int(input(f"l[{x+1}]=")) for x in range(n)]
s=set(l)
unique=[]
count=0
for x in s:
	f=l.count(x)
	if f==1:
			unique.append(x)
			
print("no of unique element in list:-",unique)