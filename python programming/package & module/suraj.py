def capitallize(s):
	s1=""
	for x in s:
		if x>='a' and x<='z':
			m=ord(x)-97+1
			c=chr(65+m-1)
			s1+=c
		else:
			s1+=x
	return s1


def decapitallize(s):
	s1=""
	for x in s:
		if x>='A' and x<='Z':
			m=ord(x)-65+1
			c=chr(95+m-1)
			s1+=c
		else:
			s1+=x
	return s1



