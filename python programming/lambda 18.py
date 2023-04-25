def ispalindrome(a):
	if a[::-1]==a:
		return True
	else:
		return False


n=int(input("enter range:-"))
l=[x for x in range(1,n+1)]
print("list of palindrome no:-")
print(list(filter(lambda a : True if ispalindrome(str(a)) else False , l)))