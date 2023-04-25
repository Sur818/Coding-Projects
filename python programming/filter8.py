def palindrome(s):
	if s==s[::-1]:
		return True
	
s=input("enter string:-").split(" ")
ans= list(filter(palindrome,s))
print(" ".join(ans))
