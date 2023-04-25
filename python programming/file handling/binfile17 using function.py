from pickle import dump,load
def create_file():
	f=open("binfile17_func.dat",'wb')
	record=[]
	op='y'
	while True:
		if op=='y':
			emp_name=input("enter employee name:-")
			emp_id=int(input("enter employee id:-"))
			emp_age=int(input("enter employee age:-"))
			emp_salery=int(input("enter employee salery:-"))
			record.append([emp_name,emp_id,emp_age,emp_salery])
		op=input("enter [y/n] to add more details or stop:-")
		
		if op=='n':
			dump(record,f)
			f.close()
			break
			
def delete_record():
	f=open('binfile17_func.dat','rb')
	record=load(f)
	f=0
	id=int(input("enter emp-id whoose details you want to delete:-"))
	for x in record:
		if x[1]==id:
			f+=1
			record.remove(x)
	if f==0:
		print("no emp id are present:-")
	f=open("binfile17_func.dat",'wb')
	dump(record,f)
	f.close()
		


def read_record():
	f=open("binfile17_func.dat",'rb')
	record=load(f)
	for x in record:
		print(x)
	f.close()
		
		

print("enter1 to create file:-")
print("enter 2 to delete record of an employee:-")
print("enter 3 to read file:-")
print("enter 0 to exit:-")
while True:
	op=int(input("enter choice:-"))
	if op==1:
		create_file()	
	if op==2:
			delete_record()
	if op==3:
			read_record()
	if op==0:
			break
			
			
		
		
	
	
	
	
	
	