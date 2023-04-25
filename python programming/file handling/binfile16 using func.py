from pickle import dump,load
def create_file():
	f=open("binfile16_func.dat",'wb')
	op='y'
	record=[]
	while True:
		d={}
		if op=='y':
			d['name']=input("enter name:-")
			d['age']=int(input("enter age:-"))
			d['roll_no']=int(input("enter roll no:-"))
			n=int(input("enter no of subject:-"))
			d1={}
			for i in range(n):
				sub_name=input("enter subject name:-")
				mark=int(input("enter marks:-"))
				d1[sub_name]=mark
			d['subject_details']=d1
			record.append(d)
		op=input("want to add more details[y/n]:-")
		if op=='n':
			dump(record,f)
			break
		
def student_name(per):
	try:
		f=open("binfile16_func.dat",'rb')
		record=load(f)
		for x in record:
			if sum(x['subject_details'].values())/len(x['subject_details'])>=per:
				print(x['name'])
	except :
		print("no file found:-")

def read_file():
	f=open("binfile16_func.dat",'rb')
	record=load(f)
	for x in record:
		print("name=",x['name'])
		print("age=",x['age'])
		print("roll no=",x['roll_no'])
		for y in x['subject_details']:
			print(y,"=",x['subject_details'][y])
		per=sum(x['subject_details'].values())/len(x['subject_details'])
		print("percentage=",per,"%")
		print("\n")
		
		

print("enter1 to create file:-")
print("enter 2 to read file:-")
print("enter 3 to get student name whose per >=input percentage:-")
print("enter 0 to exit:-")
while True:
	op=int(input("enter choice:-"))
	if op==1:
		create_file()
	if op==2:
		read_file()
	if op==3:
		per=int(input("enter percentage:-"))
		print("name of student whoose name >=input percentage:-")
		student_name(per)
	if op==0:
		break

	


			
			
			
			
