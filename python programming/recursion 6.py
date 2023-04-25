def natural_no(i,n):
	if i>n:
		return 0
	else:
		print(i)
		return i+natural_no(i+1,n)
	
n=int(input("enter range:-"))
print("sum of n naural no:-",natural_no(1,n))