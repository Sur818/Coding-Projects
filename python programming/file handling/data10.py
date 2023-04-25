import csv
def create_file():
	f=open("data10.csv",'w')
	writing=csv.writer(f)
	head=['name','age','rollno','totalmarks']
	writing.writerow(head)
	op='y'
	while True:
		if op=='y':
			name=input("enter name:-")
			age=int(input("enter age:-"))
			roll_no=int(input("enter roll no:-"))
			total_marks=int(input("enter total marks:-"))
			writing.writerow([name,age,roll_no,total_marks])
		op=input("want to add more details[y/n]:-")
		if op=='n':
			break
	print("record add sucsessfully:-")
			
def delete_file(roll_no):
	f=open("data10.csv",'r')
	found=False
	reading=csv.reader(f)
	l=[]
	for x in reading:
		if int(x[2])==roll_no:
			found=True
		else:
			l.append(x)
	if found==False:
		print("record not found:-")
	else:
		f=open("data10.csv",'w')
		writing=csv.writer(f)
		writing.writerows(l)
		print("delet record sucseesfully")
	
def read_file():
		f=open("data10.csv",'r')
		reading=csv.reader(f)
		for x in reading:
			print(x)
		
print("enter 1 for create_file:-")
print("enter 2 for read_file:-")
print("enter 3 to delete perticuler record:-")
print("enter 4 for exit:-")
op=int(input("enter choice:-"))
while True:
	if op==1:
		create_file()
	if op==2:
		read_file()
	if op==3:
		rollno=int(input("enter rollno:-"))
		delete_file(rollno)
	op=int(input("enter choice:-"))
	if op==4:
		exit(0)

		
	
	