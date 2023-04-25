n=int(input("enter no of term:-"))
l=[int(input(f"enter l[{x+1}]=")) for x in range(n)]
sum=0
for x in l:
	sum+=x
print("sum of element in list=",sum)
	