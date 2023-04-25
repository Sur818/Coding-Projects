def delete_word(a):
	if a not in s1:
		return a
		
s=input("enter string:-").split(" ")
s1=input("enter word/substring want to delete:-").split(' ')
ans=list(filter(delete_word,s))
print(" ".join(ans))