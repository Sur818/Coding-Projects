n=int(input("enter size:-"))
l=[int(input(f"l[{x+1}]=")) for x in range(n)]
pos=int(input("enter posn of  element want to delete:-"))
for i in range(pos-1,n-1):
	l[i]=l[i+1]
n=n-1
for i in range(n):
	print(l[i])
	