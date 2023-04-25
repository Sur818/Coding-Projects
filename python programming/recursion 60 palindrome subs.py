temp=0
temp2=0
result=""
def ispalindrome(s):
	if s[::-1]==s:
		return True
	else:
		return False

def print_sub(s,i,ans):
	global temp
	if i>len(s)-1:
		return ans
	if ispalindrome(s):
		if len(s)>temp:
			ans=s
			temp=len(s)	
	return print_sub(s[:-1],i,ans)

def substring(s,i,ans):
	global result
	global temp2
	if i>len(s)-1:
		return result
	ans=print_sub(s,0,"")
	if len(ans)>temp2:
		result=ans
		temp2=len(ans)
	return substring(s[1:],i,ans)

s=input("enter string:-")
print("longest palindrome substrings is:--")
print(substring(s,0,""))