def delete_word(a):
	if a  in s1:
		return a
		
s=input("enter string:-").split(" ")
s1=input("enter second string:-").split(' ')
ans=list(filter(delete_word,s))
print("intersection of both word:-")
print(" ".join(ans))