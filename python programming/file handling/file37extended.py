def count():
	a=open("Story5.txt",'r').read()
	c=0
	for x in a:
		if x.islower():
			c+=1
	return c
print("no of word in lowercase=",count())
			