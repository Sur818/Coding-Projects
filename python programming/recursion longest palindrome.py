temp=0
def reverse_string(rev,i,s):
	if i>len(s)-1:
		return rev
	return reverse_string(rev+s[len(s)-i-1],i+1,s)
	
def wordsplit(word,result,i,s):
	if i>len(s)-1:
		print(result)
		return result
	if s[i]==' ':
		if word[0]==" ":
			word=word[1::]
		ans=reverse_string("",0,word)
		if ans==word:
			if len(ans)>globals()['temp']:
				result=word
				globals()['temp']=len(ans)
			
		word=""
	wordsplit(word+s[i],result,i+1,s)

s=input("enter string:-")
s+=' '
print("longest palindrome word present in sentemce=")
print(wordsplit("","",0,s))
