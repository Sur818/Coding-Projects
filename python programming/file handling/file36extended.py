def printword(length):
	f=open("Story4.txt",'r')
	a=f.read().split(' ')
	for x in a:
		if len(x)<length:
			print(x)
	
length=int(input("enter requirement length of word want to print:---"))
print("word having length less than given lengh:--->")
printword(length)
