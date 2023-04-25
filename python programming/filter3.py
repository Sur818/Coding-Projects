def odd_no(a):
	if a%2!=0:
		return True
n=int(input("enter no of term:-"))
l=[int(input(f"l[{x+1}]=")) for x in range(n)]
print(list(filter(odd_no,l)))