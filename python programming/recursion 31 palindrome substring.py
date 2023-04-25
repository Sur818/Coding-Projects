def reverse_string(rev,i,s):
	if i>len(s)-1:
		return rev
	return reverse_string(rev+s[len(s)-i-1],i+1,s)
	
def wordsplit(word,i,s):
	if i>len(s)-1:
		return""
	if s[i]==' ':
		if word[0]==" ":
			word=word[1::]
		ans=reverse_string("",0,word)
		if ans==word:
			print(word)
		word=""
	wordsplit(word+s[i],i+1,s)


s=input("enter string:-")
s+=' '
print("all palindrome word present in sentemce=")
wordsplit("",0,s)




	