l=[]
n=int(input("enter size:-"))
l=[int(input(f"l[{x}]=")) for x in range(n)]
no=int(input("enter no want to delete:-"))
for x in l:
	if x==no:
		l.remove(no)
if l[-1]==no:
	l.remove(no)
print(l)
	