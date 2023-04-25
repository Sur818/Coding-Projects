def reverse(s):
	return s[::-1]
	
def palindrome(s):
	s1=""
	s=s.split(" ")
	for x in s:
		if x[::-1]==x:
			s1=s1+x+" "
	return s1
			
def longest_length(s):
		temp=0
		for x in s.split(" "):
			if len(x)>temp:
				temp=len(x)
				ans=x
		return ans
		
def remove(s,word):
	s1=""
	s=s.split(" ")
	for i  in range(1,len(s)+1):
		if s[i]==word:
			s.pop(i)
			break
	s=" ".join(s)
	return s
			
	
def remove_all(s,word):
	s1=""
	s=s.split(" ")
	for x in s:
		if x!=word:
			s1+=x+" "
	return s1
			

			
	
			
			
		
		
		
	