import pickle
f=open("students.dat",'wb')
while True:
	op=int(input("enter  option 1 to fill data end exit input 0:-"))
	if op==1:
		name=input("enter name:-")
		age=int(input("enter age:-"))
		roll_no=int(input("enter roll no:-"))
		pickle.dump([name,age,roll_no],f)
	if op==0:
	 	break

	 