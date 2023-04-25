import pickle
f=open('binfile7.dat','wb')
name=input("enter name:-")
age=int(input("enter age:-"))
roll_no=int(input("enter roll no:-"))
dict=[name,age,roll_no]
pickle.dump(dict,f)
f=open("binfile7.dat",'rb')
print(pickle.load(f))
