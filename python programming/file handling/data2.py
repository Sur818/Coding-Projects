import csv
def create_file():
	f=open("data2.csv",'w')
	writing=csv.writer(f)
	head=['name','age','rollno','id']
	writing.writerow(head)
	op='y'
	while True:
		if op=='y':
			name=input("enter name:-")
			age=int(input("enter age:-"))
			rollno=int(input("enter roll no:-"))
			id=int(input("enter id:-"))
			writing.writerow([name,age,rollno,id])
		op=input("want to add more details[y/n]:-")
		if op=='n':
			break
			
def read_file():
	with open("data2.csv",'r') as f:
		reading=csv.reader(f)
		print("="*50)
		for x in reading:
			print(x)
		print("-"*50)

def read_perticuler(name):
	f=open("data2.csv",'r')
	reading=csv.reader(f)
	for x in reading:
		if x[0]==name:
			print("name=",x[0])
			print("age=",x[1])
			print("roll no=",x[2])
			print("id=",x[3])
		


print("enter 1 to create file:-")
print("enter 2 to read file:-")
print("enter 3 to read perticuler:-")
print("enter 0 to exit:-")
while True:
	op=int(input("enter choice:-"))
	if op==1:
		create_file()
	if op==2:
		read_file()
	if op==3:
		name=input("enter name:-")
		read_perticuler(name)
	if op==0:
		break
	
		
	
	

	
