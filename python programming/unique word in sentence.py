l1=[]
def unique(s,i):
	if i>len(s)-1:
		return True
	if s.count(s[i])>=2:
		return False
	return unique(s,i+1)

def unique_word(word,s,i):
	global l1
	if i>len(s)-1:
		return l1
	if s[i]==' ':
		if unique(word,0):
			l1.append(word)
		word=""
		i+=1
	return unique_word(word+s[i],s,i+1)


s=input("enter string:-")
print("all unique word present in string:-")
print(unique_word("",s+"  ",0))
