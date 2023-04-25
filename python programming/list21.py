l=[]
n=int(input("enter size:-"))
l=[int(input(f"l[{x}]=")) for x in range(n)]
no=int(input("enter no want to delete:-"))
count=0
for x in l:
	if x==no:
		count+=1
for i in range(count):
	l.remove(no)
print(l)
	