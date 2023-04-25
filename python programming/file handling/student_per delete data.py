import pickle 
f=open("student_per.dat",'rb')
sir_name=input("enter sir name to delete details:-")
f1=open("student_per2.dat",'wb')
while True:
	try:
		l=[]
		a=pickle.load(f)
		if str(a[0]).find(sir_name)==-1:
			for x in a:
				l.append(x)
			#print(l)
			pickle.dump(l,f1)			
	except:
		break
print("reamaining details in binary files:-")
f1=open("student_per2.dat",'rb')
f=open("student_per.dat",'wb')
#print(pickle.load(f1))
while True:
	try:
		a=pickle.load(f1)
		pickle.dump(a)
	except:
		break