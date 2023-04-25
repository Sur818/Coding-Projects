import pickle
f=open("student_adress.dat','wb')
while True:
	name=input("enter name:-")
	age=int(input("enter age:-"))
	roll_no=int(input("enter roll_no:-"))
	adress=input("enter adress:-")
	pickle.dump([name,age,roll_no,adress],f)
	op=input(input exit to exit)
	if op=='exit':
		exit(0)
