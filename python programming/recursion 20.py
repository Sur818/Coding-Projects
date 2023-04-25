def reverse(rev,n):
	if n==0:
		return rev
	rev=rev*10+n%10
	return reverse(rev,n//10)
n=int(input("enter no:-"))
print("reverse of no:-",reverse(0,n))
	