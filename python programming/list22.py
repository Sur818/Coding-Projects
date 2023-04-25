l=[]
n=int(input("enter size:-"))
l=[int(input(f"l[{x}]=")) for x in range(n)]
pos=int(input("enter posn want to delete:-"))
for i in range(pos-1,n-1):
	l[i]=l[i+1]
l.pop()
print(l)
	
