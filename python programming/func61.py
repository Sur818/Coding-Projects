def vowel_sentence(sentence):
	for s in sentence:
		s1=""
		list=['a','e','i','o','u']
		for x in s:
			if x in list and x not in s1:
				s1+=x
		yield s1
			
s=input("enter word:-")
print("freq of vowel present in word are acording to dictionary")
x=list(vowel_sentence(s.split()))
dict={}
k=0
s=s.split()
for i in x:
	if i!="":
		dict[s[k]]=i
	k+=1
	
print(dict)
	
	