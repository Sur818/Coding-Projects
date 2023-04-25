import pickle
f=open("suraj.txt",'r')
a=f.read()
f=open("file6.dat",'wb+')
a=pickle.dump(a,f)
f.seek(0)
b=pickle.load(f)
print(b)
name=input("enter name want to replace:- ")
word=input("enter word from which you change:-")
b=b.replace(name,word)
print(b)
f=open("file6.dat",'wb')
pickle.dump(b)




