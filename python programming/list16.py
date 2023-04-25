l=[]
print("program to find no of duplicate element present in array:------")
n=int(input("enter range:-"))
l=[int(input(f"l[{x+1}]=")) for x in range(n)]
count=0
for i in range(n):
	f=0
	for j in range(i+1,n):
		if l[i]==l[j]:
			f=1
	if f==0:
			count+=1
			
print("no of duplicate element in list:-",count)