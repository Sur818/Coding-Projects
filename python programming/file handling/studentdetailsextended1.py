import pickle
def showdetails(dict):
	for x in dict:
		print(x,"=",dict[x])





f=open('studentdetails.dat','rb')
a=pickle.load(f)
#print(a)
roll_no=int(input("enter roll no to get details:-"))
for dict in a:
	if dict['roll_no']==roll_no:
		showdetails(dict)