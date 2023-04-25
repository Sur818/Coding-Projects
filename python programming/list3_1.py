n=int(input("enter no of term:-"))
l=[int(input(f"enter l[{x+1}]=")) for x in range(n)]
prod=1
for x in l:
	prod*=x
print("product of element in list=",prod)
	