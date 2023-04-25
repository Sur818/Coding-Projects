print("cteate fixed size of empty list:-")
n=int(input("enter size of empty list:-"))
l=[]
l1=[None]*n
l=[int(input(f"l[{x}]=")) for x in range(n)]
for i in range(n):
	l1[i]=l[i]
print(l1)