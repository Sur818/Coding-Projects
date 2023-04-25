def vowel(s):
	count=0
	list=['a','e','i','o','u']
	for x in s:
		if x in list:
			count+=1
	return count
s=input("enter string:-")
s.lower()
print("no of vowel in string=",vowel(s))