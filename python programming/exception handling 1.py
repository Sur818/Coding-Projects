def remove_collom(l,n):
	for x in l:
		try:
			x.pop(n-1)
		except IndexError:
			print("this collom not present\ninvalid collom input:-")
			exit(0)
	return l
	



l=eval(input("enter matrix:-"))
n=int(input("enter collom wanted to delete:-"))
print(remove_collom(l,n))