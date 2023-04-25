def remove_dup(s):
	s1=""
	for x in s:
		if x not in s1:
			s1=s1+x
	return s1
string=input("enter string:-")
print(remove_dup(string))
