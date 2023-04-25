import suraj
s=input("enter string:-").split(" ")
s1=input("enter words you want to capitallize:-").split(" ")
for x in s1:
	if x in s:
		s1=suraj.capitallize(x)
			
		i=s.index(x)
		s[i]=s1
print(" ".join(s))
