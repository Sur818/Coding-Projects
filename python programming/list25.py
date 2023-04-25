n=int(input("enter size:-"))
l=[]
l=[int(input(f"l[{x}]=")) for x in range(n)]
target_sum=int(input("enter target:-"))
print("range of indexex=")
for i in range(n-1):
	for j in range(i+1,n):
		if l[i]+l[j]==target_sum:
			print(i,j)
			
			
