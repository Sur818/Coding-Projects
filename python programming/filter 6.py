def delete_word(a):
	if a  not in s1:
		return a
		
s=input("enter string:-").split(" ")
s1=input("enter second string:-").split(' ')
ans=list(filter(delete_word,s))
print("union of both word:-")
print(" ".join(ans)+" " +" ".join(s1))