def swapcase(s):
	s1=""
	for x in s:
		if x>='A' and x<='Z':
			m=ord(x)-65+1
			c=chr(97+m-1)
			s1+=c
		elif x>='a' and x<='z':
			m=ord(x)-97+1
			c=chr(65+m-1)
			s1+=c
	return s1
	
def swapcase_first(s):
	 if s[0]>='A' and  s[0]<='Z':
	 	m=ord(s[0])-65+1
	 	c=chr(97+m-1)
	 elif s[0]>='a'and s[0]<='z':
	 	m=ord(s[0])-97+1
	 	c=chr(65+m-1)
	 return c+s[1::]
	

	 
			