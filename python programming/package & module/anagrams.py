import sorting
def isanagram(s1,s2):
 s1=sorting.sort(s1)
 s2=sorting.sort(s2)
 if s1==s2:
  return True
 else:
  return False

def anagram_word(s):
	s=s.split()
	l=[]
	s1=""
	for i in range(len(s)):
		l1=[]
		f=0
		l1.append(s[i])
		for j in range(i+1,len(s)):
			if isanagram(s[i],s[j]):
				if s[j] not in s1:	
					f+=1
					l1.append(s[j])	
					s1+=s[j]
		if f!=0:
			l.append(l1)
	return l

	