import pickle
f=open("studentdetails.dat",'wb')
l=[]
while True:
	dict={}
	op=int(input("enter 1 to fill student details and enter 0 to exit:-"))
	if op==1:
		dict["name"]=input("enter name:-")
		dict["age"]=int(input("enter age:-"))
		dict["roll_no"]=int(input("enter roll no:-"))
		dict1={}
		n=int(input("enter no of subject:-"))
		for i in range(n):
			sub_name=input("enter sub_name:-")
			mark=int(input("enter mark"))
			dict1[sub_name]=mark
			dict["acedmic_details"]=dict1
		l.append(dict)
		
	if op==0:
		pickle.dump(l,f)
		break
print(l)
