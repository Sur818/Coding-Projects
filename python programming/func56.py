def func(string ,word):
	l=string.split(' ')
	l.remove(word)
	return l

string=input("enter sentence:-")
word=input("enter word want to delete:-")
print("after deleting thease word:-")
ans=func(string,word)
ans=" ".join(ans)
print(ans)
