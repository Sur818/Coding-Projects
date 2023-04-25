def niven_no(n):
	sum=0
	for x in n:
		sum+=int(x)
	if int(n)%sum==0:
		return True
	else:
		return False

n=int(input("enter range:-"))
if niven_no(str(n)):
	print("niven no:+")
else:
	print("not niven no:-")