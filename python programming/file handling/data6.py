import csv
def create_file():
	f=open("data6.csv",'w')
	writing=csv.writer(f)
	head=['name','age','roll_no','totalmarks']
	writing.writerow(head)
	op='y'
	while True:
		if op=='y':
			name=input("enter name:-")
			age=int(input("enter age:-"))
			roll_no=int(input("enter roll no:-"))
			total_marks=int(input("enter total marks:-"))
			writing.writerow([name,age,roll_no,total_marks])
		op=input("want to continue[y/n]:-")
		if op=='n':
			break
		
def count_record():
	f=open("data6.csv",'r')
	reading =csv.reader(f)
	c=-1
	for data in reading:
		c+=1
	return c

def read_file():
	f=open("data6.csv",'r')
	reading=csv.reader(f)
	for record in reading:
		print(record)

print("enter 1 to create file:-")
print("enter 2 to read file:-")
print("enter 3 to count no of records in file:-")
op=int(input("enter choice:-"))
if op==1:
	create_file()
if op==2:
	read_file()
if op==3:
	print("no of record present in csvfile:-")
	print(count_record())
