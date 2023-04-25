def sort(s):
	s.sort()
	return s

s=input("enter string:-")
print("after sorting the string:---")
ans=sort(list(s))
print("".join(ans))