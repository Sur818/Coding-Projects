import pickle
f=open("file5.dat",'rb+')
b=pickle.load(f)
print(b)
c=0
for x in b:
	c+=1
pickle.dump(f"\nno of line in this bin fiile={c}",f)
