import csv

def create_file():
	f=open("data.csv",'w')
	writing=csv.writer(f)
	head=['srno','name','age','contact']
	singledata=['1' ,'ram',20,'12345678']
	writing.writerow(head)
	writing.writerow(singledata)

def read_file():
	f=open("data.csv",'r')
	reading=csv.reader(f)
	for x in reading:
		print(x)
	

create_file()
read_file()
