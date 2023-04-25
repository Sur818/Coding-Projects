
def print_sub(s,i):
	if i>len(s)-1:
		return 
	print(s)
	return print_sub(s[:-1],i)


def substring(s,i):
	if i>len(s)-1:
		return 
	print_sub(s,0)
	return substring(s[1:],i)

s="suraj"
substring(s,0)