import csv
import random
import string

def username_create(name):
	N = 3 
	res = ''.join(random.choices(string.			ascii_lowercase + string.digits, k = N)) 
	return str(name+"@"+res)

def account_no():
	N=10
	res="".join(random.choices(string.digits,k=N))
	return res

	
def update_file(user,password,amt):
	f=open("data3.csv",'r')
	reading=csv.reader(f)
	l=[]
	for row in reading:
		if row[2]==user and row[3]==password:
			row[5]=amt
	l.append(row)
	f=open("data3.csv",'w')
	writing=csv.writer(f)
	writing.writerows(l)
	
def show_allacounts():
	f=open('data3.csv','r')
	reading=csv.reader(f)
	for x in reading:
		print("name=",x[0])
		print("age=",x[1])
		print("acc no=",x[4])
		print("balance=",x[5],'\n')
		

def change_password(user,oldpassword,newpassword):
		f=open("data3.csv",'r')
		reading=csv.reader(f)
		l=[]
		for row in reading:
			if row[2]==user and row[3]==oldpassword:
				row[3]=newpassword
			l.append(row)
		f=open("data3.csv",'w')
		writing=csv.writer(f)
		writing.writerows(l)
			
					
		


def create_file():
	f=open('data3.csv','a')
	writing=csv.writer(f)
	name=input("enter name:-")
	age=int(input("enter age:-"))
	password=input("enter password:-")
	while True:
		confirm_password=input("enter confirm  password:-")
		if password==confirm_password:
				user=username_create(name.split(' ')[0])
				accno=account_no()
				balance=int(0)
				writing.writerow([name,age,user,password,accno,balance])
				break
		else:
			print("plaese confirm password:-")
	print("thank you for banking:-")
	print("your account no=",accno)
	print("your username=",user)
	print("your intial balance=",balance)	
		
		
def user_login():
		f=open("data3.csv",'r')
		reading=csv.reader(f)
		check=0
		user=input("enter user name:-")
		password=input("enter password:-")
		check=0
		for x in reading:
			if x[2]==user:
				check+=1
				attempt=0
				while True:
					attempt+=1
					if x[3]==password:
						print("name=",x[0])
						print("age=",x[1])
						print("acc no=",x[4])
						print("balance=",x[5])
						print("user=",x[2])
						print("enter 1 to show balance:-")
						print("enter 2 to add balance:-")
						print("enter 3 to withdraw balance:-")
						print("enter 4 to change your password:-")
						print("enter 0 for exit:-")
					
									
									
						while True:
							op=int(input("enter choice:-"))	
							if op==1:
								print("your balance=",x[5])
							if op==2:
								amt=int(input("enter amount:-"))
								x[5]=int(x[5])
								x[5]+=amt
								update_file(user,password,x[5])
							
							if op==3:
								amt=int(input("enter amount:-"))
								x[5]=int(x[5])
								x[5]-=amt
								update_file(user,password,x[5])
							if op==4:
								newpassword=input("enter new password:-")
								change_password(user,password,newpassword)
								print("password has been changed!")
							
							if op==0:
								exit(0)
					else:
						if attempt>=3:
							print("max limit exceded!")
							exit(0)
						else:
							print("enter correct password:-")
							password=input("enter password:-")
		if check==0:
			print("no data found!")


def delete_account(name):
	f=open("data3.csv",'r')
	reading=csv.reader(f)
	l=[]
	for row in reading:
		if row[0]!=name:
			l.append(row)
	f=open("data3.csv",'w')
	writing=csv.writer(f)
	writing.writerows(l)
	
											
																								
print("you identity:-")
print("1: user")
print("2: admin")
op=int(input("select choice:-"))
if op==1:
	print("enter1 to create account:-")
	print("enter 2 to login")
	choice=int(input("select choice:-"))
	if choice==1:
		create_file()
	if choice==2:
		user_login()
if op==2:
	print("enter 1 to show all acount:-")
	print("enter 2 to delete account:-")
	op=int(input("enter choice:-"))
	if op==1:
		show_allacounts()
	if op==2:
		name=input("enter name of customor whose data want to delete:-")
		delete_account(name)
		
	
	
	
	
	

	
	
			
			
		



			
		
		

			
	