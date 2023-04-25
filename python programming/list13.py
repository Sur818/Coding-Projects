l1=[]
l2=[]
n=int(input("enter range:-"))
l1=[int(input(f"l[{x+1}]=")) for x in range(n)]
print("after copying element of l1 in l2:-")
for i in range(n):
	l2.append(l1[i])
print(l2)



