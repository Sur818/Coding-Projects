import itertools
def ispalindrome(s):
	if s[::-1]==s:
		return True
	else:
		return False
l=[]
s=input("enter string :-")
ans=list(itertools.permutations(s))
print("all palindromic permutations:----->")
for x in ans:
	if ispalindrome("".join(x)):
		l.append("".join(x))
print(set(l))