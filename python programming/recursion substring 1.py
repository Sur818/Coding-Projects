def ispalindrome(s):
	if s[::-1]==s:
		return True
	else:
		return False

def print_sub(s,i):
	if i>len(s)-1:
		return 
	if ispalindrome(s):
		print(s)
	return print_sub(s[:-1],i)

def substring(s,i):
	if i>len(s)-1:
		return 
	print_sub(s,0)
	return substring(s[1:],i)

s=input("enter string:-")
print("all palindrome strings are:---")
substring(s,0)