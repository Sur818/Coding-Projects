ans=""
def string(s,delete_word,word,i):
	global ans
	if i>len(s)-1:
		return ans
	if s[i]==" ":
	#	print(word)
		if word!=delete_word:
			ans+=word+" "
		word=""
		i+=1
	return string(s,delete_word,word+s[i],i+1)

s=input("enter string:-")
delete_word=input("enter word to delete:-")
print(string(s+"  ",delete_word,"",0))