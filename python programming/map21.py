k=0
def remove_element(x):
	global k
	k+=1
	if k==pos:
		return n1
	return x
		



n=int(input("how many data want to enter:-"))
l=[int(input(f"l[{x+1}]=")) for x in range(n)]
n1=int(input("enter element from which to replace:--"))
pos=int(input("enter posn:-"))
print(list(map(remove_element,l)))