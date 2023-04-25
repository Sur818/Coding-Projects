import pickle
f=open("file5.dat",'rb')
a=pickle.load(f)
l=[]
for line in a:
	ans=list(filter(lambda x:True if len(x)==len(set(x)) else False, line.split(' ')))
	l.append(ans)
print("list of unique words:-")
print(l)