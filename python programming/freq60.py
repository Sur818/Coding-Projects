def vowel_word(s):
	s1=""
	list=['a','e','i','o','u']
	for x in s:
		if x in list and x not in s1:
			f=s.count(x)
			s1+=x
			print("frq of ",x,"in ",s,"=",f)
	
s=input("enter word:-")
print("freq of vowel present in word are")
vowel_word(s)
		

			
		