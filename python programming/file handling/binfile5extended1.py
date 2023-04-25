import pickle
f=open("file5.dat",'rb')
a=pickle.load(f)
print(a)
c=0
for line in a:
	c+=1
print("no of lines=",c)