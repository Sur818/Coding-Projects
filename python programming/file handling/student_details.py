from pickle import dump,load
f=open("student_detail.dat",'wb')
op='Yes'
while True:
	if op=='Yes':
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
	op=input("are you want to add information enter Yes else enter No:-")

	if op=='No':
		break
	
		
		
