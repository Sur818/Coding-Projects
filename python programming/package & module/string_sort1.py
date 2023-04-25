import string_sort
def isanagram(s1,s2):
 s1=string_sort.sort(s1)
 s2=string_sort.sort(s2)
 if s1==s2:
  return True
 else:
  return False

def anagram_pair(s):
	s=s.split()
	l=[]
	for i in range(len(s)):
		l1=[]
		for j in range(i+1,len(s)):
			if isanagram(s[i],s[j]):
				l1.append(s[i])
				l1.append(s[j])
		if l1!=[]:
			l.append(l1)
	return l
	
		
		
	
				
				
			
			
	