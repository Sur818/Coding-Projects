from pickle import dump,load
def create_file():
	f=open("bin14_func.dat",'wb')
	op='y'
	while True:
		if op=='y':
			d={}
			d["name"]=input("enter name:-")
			d["age"]=int(input("enter age:-"))
			d["roll_no"]=int(input('enter roll no:-'))
			n=int(input("enter no of subject:-"))
			d1={}
			for i in range(n):
				sub_name=input("enter subject name:-")
				mark=int(input("enter marks:-"))
				d1[sub_name]=mark
			d["subject_detail"]=d1
			dump(d,f)
		op=input("do you want to add more details[y/n]:-")
		if op=='n':
			break

def read_perticuler(name):
	f=open("bin14_func.dat",'rb')
	while True:
		try:
			a=load(f)
			if str(a['name'])==name:
				for x in a:
					print(x,"=",a[x])
		except EOFError:
			break
			
			
def read_all():
	try:
		f=open("bin14_func.dat",'rb')
		while True:
			try:
				a=load(f)
				print(a)
			except:
				break
	except:
		print("no such file are created::-")

		
def topper_details():
	temp=0
	f=open("bin14_func.dat",'rb')
	while True:
		try:
			a=load(f)
			if sum(a['subject_detail'].values())>temp:
				temp=sum(a['subject_detail'].values())
				ans=a
		except EOFError:
			break
	for x in ans:
		print(x,'=',a[x])


def position_student(posn):
	per=[]
	f=open("bin14_func.dat",'rb')
	while True:
		try:
			a=load(f)
			per.append(sum(a['subject_detail'].values())/len(a['subject_detail']))
		except EOFError:
			per=sorted(per)
			try:
				b=per[-posn]
				print("percentagea=",b,'%')
			except IndexError:
				print("not more student-")
				break
			f=open("bin14_func.dat",'rb')
			while True:
				try:
					a=load(f)
					if sum(a['subject_detail'].values())/len(a['subject_detail'])==b:
						read_perticuler(a['name'])
				except:
					break
			
			break
				
					

print("enter 1 to create file if not created:-")
print("enter 2to get details of all student:")
print("enter 3 to get details of a perticuler student :-")
print("enter 4 to get details of topper:-")
print("enter 5 to get position of student:-")
print("enter 6 to exit:-")
while True:
	op=int(input("enter choice:-"))
	if op==1:
		create_file()
	if op==2:
		read_all()
	if op==3:
		name=input("enter student name whoo'se details  you want:-")
		read_perticuler(name)
	if op==4:
		topper_details()
	if op==5:
		n=int(input("enter position no:-"))
		position_student(n)
	if op==6:
		break
	
		


		
		