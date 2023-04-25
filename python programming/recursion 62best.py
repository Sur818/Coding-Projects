def print_sub(s):
	if s=="":
		return
	print(s)
	return print_sub(s[:-1])

def substring(s):
	if s=="":
		return	
	print_sub(s)
	return substring(s[1:])

s="suraj"
substring(s)