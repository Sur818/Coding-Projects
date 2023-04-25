import pickle
f=open("bin4.dat",'wb+')
pickle.dump("my name is suraj singh",f)
f.seek(0)
print(pickle.load(f))

