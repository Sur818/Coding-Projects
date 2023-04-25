def merge(s1,s2):
	i=0
	ans=''
	while i<len(s1) or i<len(s2):
		if i<len(s1):
			ans+=s1[i]
		if i<len(s2):
			ans+=s2[i]
		i+=1
	return ans

s1=input("enter first string:-")
s2=input("enter second string:-")
print("after concatating alternativeky")
print(merge(s1,s2))
		