from pickle import dump,load

def append_records():
	 f=open("binfileappend.dat",'ab')
	 record=[]
	 while True:
	 	name=input('enter name:-')
	 	age=int(input("enter age:-"))
	 	roll_no=int(input("enter roll_no:-"))
	 	total_marks=int(input("enter total marks:-"))
	 	record.append([name,age,roll_no,total_marks])
	 	op=input("r u want to add more details enter [y/n]:-")
	 	if op=='n':
	 		dump(record,f)
	 		#print(record)
	 		break
	 f.close()
	 print('\n')


def read_records():
	 f=open("binfileappend.dat",'rb')
	 while True:
	 	try:
	 		a=load(f)
	 		for x in a:
	 			print(x)
	 	except EOFError:
	 		break
	
	 print('\n')
	 	
print("enter 1 to append recod:-")
print("enter 2 to read records:-")
print("enter 0 to exit:-")
op=int(input("enter choice:-"))
while True:
	if op==1:
		append_records()
	if op==2:
		read_records()
	if op==0:
		break
	op=int(input("enter choice:-"))
else:
	print("thank you!")

	 	