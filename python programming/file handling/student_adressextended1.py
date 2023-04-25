from  pickle import load,dump
f=open("student_adress.dat",'rb')
while True:
	try:
		a=load(f)
		print(a)
	except:
		break