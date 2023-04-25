def fall_range(n,n1,n2):
	if n in range(n1,n2):
		return True
	else:
		return False






n1,n2=map(int,input("enter range:-").split(" "))
n=int(input("enter no:-"))
if fall_range(n,n1,n2):
	print("yes!")
else:
	print("no!")