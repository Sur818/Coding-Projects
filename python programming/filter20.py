def unique(s):
	if len(s)==len(set(s)):
		return True
	else:
		return False
		
s=input("enter string:-").split(' ')
print("tuple of unique word are:-")
print(tuple(filter(unique,s)))