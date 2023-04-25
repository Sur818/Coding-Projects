import pickle
f=open("file5.dat",'rb+')
a=pickle.load(f)
name=input("enter name want to replace:-")
word=input("from which word:-")
for x in a:
	b=x.replace(name,word)
	a[a.index(x)]=b
print(a)
