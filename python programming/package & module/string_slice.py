def per_slice(s,per):
	per=int(len(s)*per/100)
	s1=s[:per]
	s2=s[per::]
	s=s1+" "+s2
	return s
	
	
	

