def func(l,n):
	if n<=0:
		return 0
	else:
		return int(l[n-1])+func(l,n-1)
	


n=int(input("enter how many no want to enter:-"))
l=[input(f"l[{x+1}]=") for x in range(n)]
print("sum of no in list=",func(l,len(l)))