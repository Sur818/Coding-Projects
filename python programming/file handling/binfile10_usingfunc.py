from pickle import dump,load
def create_file():
	f=open("binfile10_func",'wb')
	while True:
		name=input("enter name:-")
		age=int(input("enter age:-"))
		roll_no=int(input("enter roll_no:-"))
		dump([name,age,roll_no],f)
		op=input("want to add more details[y/n]:-")
		if op=='n':
			break

def read_file():
	f=open("binfile10_func",'rb')
	while True:
		try:
			a=load(f)
			print(a)
		except:
			break

create_file()
read_file()