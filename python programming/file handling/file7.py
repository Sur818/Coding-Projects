f=open("file7.txt",'w+')
f.write("hello my name is suraj singh")
f.seek(0)
a=f.read()
print(a)
word=input("\nwhich word want to find:-")
count=0
for i in a.split(' '):
	count+=1
	if word==i:
		print("word found at position ",count)
		