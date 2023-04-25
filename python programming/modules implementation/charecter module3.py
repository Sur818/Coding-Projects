import charectermodule
#find how many word in sentence are in uppercase:------>
l=[x for x in input("enter string:-").split(' ')]
print("word whose are in upper case:-")
for x in l:
	if charectermodule.alluppercase(x):
		print(x,end=" ")
