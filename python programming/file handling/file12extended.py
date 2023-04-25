f=open("file12.txt",'r+')
a=f.read()
print(a)
a=a.split(' ')
word=input("enter word want to insert:-")
after_word=input("after which word:-")
for i in range(0,len(a)):
	if a[i]==after_word:
		a.insert(i+1,word)
print(" ".join(a))
f.seek(0)
f.writelines(" ".join(a))
