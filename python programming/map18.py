def Capitallize(s):
	s1=s[0].upper()
	s1=s1+s[1::]
	return s1

s=input("enter string:-").split(' ')
ans=list(map(Capitallize ,s))
print(" ".join(ans))
	