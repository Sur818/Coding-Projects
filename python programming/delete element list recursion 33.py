l1=[]
def delete_element(l,i,index):
	global l1
	if i>len(l)-1:
		return l1
	if i+1!=index:
		l1.append(l[i])
	return delete_element(l,i+1,index)
n=int(input("enter no of term:-"))
l=[int(input(f"l[{x+1}]=")) for x in range(n)]
index=int(input("which index element want to delete :-"))
if index>=len(l):
	print("out of index")
else:
	
	print(delete_element(l,0,index))
