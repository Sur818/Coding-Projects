def  rev_no(rev,n):
	if n==0:
		return rev
	return rev_no(rev*10+n%10,n//10)
n=int(input("enter range:-"))
for i in range(1,n+1):
	rev=rev_no(0,i)
	if rev==i:
		print(i)