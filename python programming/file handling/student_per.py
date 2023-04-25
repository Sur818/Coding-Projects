import pickle
f=open("student_per.dat",'wb')
op='Yes'
while True:
	if op=='Yes':
		name=input("enter student name:-")
		age=int(input("enter age:-"))
		roll_no=int(input("enter roll-no:-"))
		n=int(input("enter no of subject:-"))
		l=[]
		for i in range(n):
			sub_name=input("enter sub_name:-")
			mark=int(input("enter marks:-"))
			l.append(f"{sub_name}={mark}")
		pickle.dump([f"name={name}",f'age={age}',f"roll_no={roll_no}",l],f)
	if op=='No':
		break
	op=input("enter Yes to add more details else No:-")



	
		