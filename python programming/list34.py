def word(l,n):
	for x in l:
		if len(x)>n:
			print(x)


l=input("enter words:-").split(' ')
n=int(input("enter  length criteria :-"))
print("word which length greater than the given length:-")
word(l,n)
