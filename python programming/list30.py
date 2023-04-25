def rotation(l,n,rot,shift):
	if rot=='left':
		for i in range(shift):
			k=l[0]
			for j in range(n-1):
					l[j]=l[j+1]
			l[n-1]=k
	else:
		for i in range(shift):
			k=l[n-1]
			for j in range(n-1,0,-1):
				l[j]=l[j-1]
			l[0]=k
	return l
	


l=[]
n=int(input("enter size :-"))
l=[int(input(f"l[{x}]=")) for x in range(n)]
rot=input("enter which rotation:-")
shift=int(input("enter no of shift"))
print(rotation(l,n,rot,shift))
	
