ans=""
def reverse(s,rev,i):
	if i>len(s)-1:
		return rev
	return reverse(s,rev+s[len(s)-1-i],i+1)

def word_split(word,i,s):
	global ans
	if i>=len(s)-1:
		return ans
	if s[i]==' ':
		ans+=reverse(word,"",0)+' '
		word=""
		i+=1
	return word_split(word+s[i],i+1,s)

s=input("enter string:-")
print(word_split("",0,s+"  "))
	
		