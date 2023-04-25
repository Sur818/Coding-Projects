l=[]
n=int(input("enter size:-"))
l=[int(input(f"l[{x}]=")) for x in range(n)]
elements=input("enter elements want to delete").split(',')
for x in elements:
	f=0
	for i in range(n):
		if int(x)==l[i]:
			f+=1
	for y in range(f):
		l.remove(int(x))
		n=n-1
print("after deleting the elements:--")
print(l)
		
			