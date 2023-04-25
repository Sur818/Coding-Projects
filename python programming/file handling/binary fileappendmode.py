from pickle import dump,load
f=open("binfileappend.dat",'wb')
record=[]
while True:
	name=input("enter name:-")
	age=int(input("enter age:-"))
	roll_no=int(input("enter roll no:-"))
	total_mark=int(input("enter total marks:-"))
	record.append([name,age,roll_no,total_mark])
	op=input("are you want to add details [y/n]:-")
	if op=='n':
		dump(record,f)
		break
	
	