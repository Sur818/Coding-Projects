def freq_word(word):
	c=0
	a=open("file38.txt",'r').read().split(' ')
	for x in a:
		if x==word:
			c+=1
	return c
word=input("enter wore which freq you want:-")
print("freqvency of enterde word=",freq_word(word))