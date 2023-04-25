import pandas as pd
import csv
def create_file():
	f=open("data4.csv",'w')
	writing=csv.writer(f)
	head=['sn','name','age','rollno','id']
	writing.writerow(head)
	op='y'
	while True:
		if op=='y':
			sn=int(input("enter seriel no:-"))
			name=input("enter name:-")
			age=int(input("enter age:-"))
			rollno=int(input("enter roll no:-"))
			id=int(input("enter id no:-"))
			writing.writerow([sn,name,age,rollno,id])
		op=input("want to add more details[y/n]:-")
		if op=='n':
			break
			
			
def read_file():
		f=open("data4.csv",'r')
		reading=csv.reader(f)
		for x in reading:
			print(x)
	
def update_file():
	f=pd.read_csv("data4.csv")
	f.loc[5,'name']="abc"
	f.to_csv("data4.csv")
	
	
		
		
print("enter 1 to create file:-")
print("enter 2 to read file:-")
print("enter 3 to update file:-")
print("enter 4 to exit:-")
while True:	
	op=int(input("enter choice:-"))
	if op==1:		
		create_file()
	if op==2:
		read_file()
	if op==3:
		update_file()
	if op==4:
		break
		
			
			
	
