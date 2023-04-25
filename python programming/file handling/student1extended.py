import pickle
f=open("student.dat",'rb')
a=pickle.load(f)
print(a)