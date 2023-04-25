def remove_dup(s):
	s1=""
	for x in s:
		if x not in s1:
			s1=s1+x
	return s1

string=input("enter sentence:-")
for x in list(string.split(' ')):
	print(remove_dup(x),end=' ')

