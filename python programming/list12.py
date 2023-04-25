l=[]
n=int(input("enter range:-"))
l=[int(input(f"l[{x+1}]=")) for x in range(n)]
s=set(l)
for x in s:
	f=l.count(x)
	print(f"frequency of {x} in l=",f)