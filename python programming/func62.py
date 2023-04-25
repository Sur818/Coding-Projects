def word_freq(sentence,word):
	f=sentence.count(word)
	return f

sentence=input("enter sentence:-")
for x in set(sentence.split(' ')):
	f=word_freq(sentence.split(' '),x)
	print(f"frequency of word {x} in sentence=",f)
	
