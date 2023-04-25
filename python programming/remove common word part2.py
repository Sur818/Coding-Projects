def remove_commonword(s1,s2):
	s=list(s1.intersection(s2))
	i=0
	while i<len(s):
		s1.remove(s[i])
		s2.remove(s[i])
		i+=1
	else:
		print(" ".join(s1))
		print(" ".join(s2))
	
s1=input("enter first sentence:-").split(' ')
s2=input("enter second sentence:-").split(' ')
remove_commonword(set(s1),set(s2))