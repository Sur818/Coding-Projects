s=input("enter string:-").split(' ')
vowel=['a','e','i','o','u']
def word_present(a):
	a=" ".join(a)
	for x in a.split():
		if x in vowel:
			return True
	else:
		return False




def func(a):
	if word_present(a):
		return True
print("word which contain vowel")
ans=list(filter(func,s))
print(" ".join(ans))

	