def  rev_no(rev,n):
	if n==0:
		return rev
	return rev_no(rev*10+n%10,n//10)
n=int(input("enter no:"))
rev=rev_no(0,n)
if rev==n:
	print("palindrome no :-")
else:
	print("not palindrome no:- ")