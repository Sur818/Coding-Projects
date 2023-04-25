def first_repeating(l):
	for i in range(len(l)):
		for j in range(i+1,len(l)):
			if l[i]==l[j]:
				return l[i]
	return None
	
l=[]
n=int(input("enter no of term:-"))
l=[int(input(f("l[{x}]="))) for x in range(n)]
ans=first_repeating(l)
if ans!=None:
	print(ans)
else:
	print("no any repeating element are present:-")
