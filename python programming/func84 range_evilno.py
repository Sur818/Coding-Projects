def evil_no(n):
	if bin(n).count('1')%2==0:
		return True
	else:
		return False

n=int(input("enter range:-"))
for i in range(1,n+1):
	if evil_no(i):
		print(i)