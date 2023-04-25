def word_decapitallize(s):
	s1=""
	for x in s:
		if x>='A' and x<='Z':
			m=ord(x)-65+1
			s1+=chr(97+m-1)
		else:
			s1+=x
	return s1
	
	
def word_capitallize(s):
	s1=""
	for x in s:
		if x>='a' and x<='z':
			m=ord(x)-97+1
			s1+=chr(65+m-1)
		else:
			s1+=x
	return s1
