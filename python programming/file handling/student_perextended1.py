import pickle 
f=open("student_per.dat",'rb')
sir_name=input("enter sir name to get details:-")
while True:
	try:
		a=pickle.load(f)
		if str(a[0]).find(sir_name)!=-1:
				print(a)
	except:
		break