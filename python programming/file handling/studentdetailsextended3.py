import pickle
def showdetails(dict):
	for x in dict:
		print(x,'=',dict[x])
	print('\n')


f=open("studentdetails.dat",'rb')
a=pickle.load(f)
age1,age2=map(int,input("enter age range:-").split(','))
for dict in a:
	if dict['age']>=age1 and dict['age']<=age2:
		showdetails(dict)