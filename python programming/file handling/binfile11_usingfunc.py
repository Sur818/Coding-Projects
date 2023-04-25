from pickle import dump,load
def create_file():
	f=open("binfile11_func.dat",'wb')
	op='y'
	while True:
		if op=='y':
			name=input("enter name:-")
			age=int(input("enter age:-"))
			roll_no=int(input("enter roll_no:-"))
			dump([name,age,roll_no],f)
		op=input("want to add more details[y/n]:-")
		if op=='n':
			break

def read_file(name):
	f=open("binfile11_func.dat",'rb')
	while True:
		try:
			a=load(f)
			if a[0]==name:
				print("name=",a[0],'\nage=',a[1],'\nrollno=',a[2])
		except:
			break

create_file()
name=input("enter name to get details:-")
read_file(name)