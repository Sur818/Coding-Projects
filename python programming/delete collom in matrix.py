def remove_collom(l,n):
	for x in l:
		x.pop(n-1)
	return l
	



l=eval(input("enter matrix:-"))
n=int(input("enter collom wanted to delete:-"))
print(remove_collom(l,n))
