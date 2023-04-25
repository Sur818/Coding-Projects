
def word_split(word,i,s):
	if i>len(s)-1:
		return word
	if s[i]==' ':
		print(word)
		word=""
		i+=1
	return word_split(word+s[i],i+1,s)

s=input("enter string:-")
print(word_split("",0,s))
	
		