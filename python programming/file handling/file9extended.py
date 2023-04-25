f=open("file9.txt",'r')
a=f.read()
word=input("which word want to replace:-")
w=input("from which word:-")
a=a.replace(word,w)
f.close()
f=open("file9.txt",'w')
f.write(a)



