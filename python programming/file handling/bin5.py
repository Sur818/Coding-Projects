import pickle
f=open("file54.txt",'r')
a=f.readlines()
f.open("file5.dat",'wb')
pickle.dump(a,f)
