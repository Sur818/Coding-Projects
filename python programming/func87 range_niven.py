def niven_no(n):
	sum=0
	for x in n:
		sum+=int(x)
	if int(n)%sum==0:
		return True
	else:
		return False
n=int(input("enter range:-"))
for i in range(1,n+1):
	if niven_no(str(i)):
		print(i)