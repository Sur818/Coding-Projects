def unique_word(s,i):
	if i>len(s)-1:
		return True
	if s.count(s[i])>=2:
		return False
	return unique_word(s,i+1)


s=input("enter string:-")
if unique_word(s,0):
	print("unique word:-")
else:
	print("not unique word:-")
	

	
	
	
	