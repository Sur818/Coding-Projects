l=input("enter words:-").split(' ')
for  i in range(97,120):
	char=chr(i)
	print("word starting with {}".format(char))
	for x in l:
		if x[0]==char:
			print(x,end=" ")
	print('\n',end=" ")
	

			
		