import csv
def create_file():
	f=open("data5.csv",'w')
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

def read_file():
	f=open("data5.csv",'r')
	reading=csv.reader(f)
	for x in reading:
		print(x)
		
			
def get_topper():
	temp=0
	name=""
	count=0
	f=open("data5.csv",'r')
	reading=csv.reader(f)
	for row in reading:
			count+=1
			if count>1:
				if int(row[-1])>int(temp):
					temp=row[-1]
					name=row[0]
	return name
	

print("enter 1 to create file:-")
print("enter 2 to read file:-")
print("enter 3 to get topper name:-")
print("enter 4 to exit:-")
op=int(input("enter option:-"))
while True:
	if op==1:
		create_file()
	if op==2:
		read_file()
	if op==3:
		name=get_topper()
		print(name)
	if op==4:
		exit(0)
	op=int(input("enter choice:-"))

	
	
	