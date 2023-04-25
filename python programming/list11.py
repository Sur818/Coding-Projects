l=[]
n=int(input("enter size:-"))
l=[int(input(f'l[{x+1}]=')) for x in range(n)]
no=int(input("enter element which element freq want to check:-"))
f=0
for i in range(n):
	if l[i]==no:
		f+=1
print("frequency of that element =",f)