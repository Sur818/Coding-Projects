import pickle
f=open("file52.dat",'wb+')
pickle.dump(["hello"],f)
f.seek(0)
print(pickle.load(f))