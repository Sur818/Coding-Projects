def func(a):
	if a not in l2:
		return True

n1=int(input("enter no of term:-"))		
l1=[int(input(f"l1[{x+1}]=")) for x in range(n1)]
n2=int(input("how many data want to delete:-"))
l2=[int(input(f"l2[{x+1}]=")) for x in range(n2)]
print("after deletion:-")
print(list(filter(func,l1)))
