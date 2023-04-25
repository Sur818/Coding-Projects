f=open("details.txt",'r')
a=f.read()
print(a)
word=input("enter word wnat to change:-")
word1=input("enter new word:-")
a=a.replace(word,word1)
f=open("detalsupdate.txt",'w+')
f.write(a)
#f.seek(0)
#print(f.read())

	
	
