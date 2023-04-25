import pickle
def create_file():
	f=open("binfile13_func.dat",'wb')
	op='y'
	while True:
		if op=='y':
			name=input("enter name:-")
			age=int(input("enter age:-"))
			roll_no=int(input("enter roll_no:-"))
			adress=input("enter adress:--")
			pickle.dump([name,age,roll_no,adress],f)
		op=input("do you want to add more details [y/n]:-")
		if op=='n':
			break

def showdetails(a):
	print(f"name={a[0]}\nage={a[1]}\nroll no={a[2]}\nadress={a[3]}")
	
	
create_file()
pincode=int(input("enter pincode to get details:-"))
f=open("binfile13_func.dat",'rb')
while True:
	try:
		a=pickle.load(f)
		if str(a[3]).find(f"pincode-{pincode}")!=-1:
			showdetails(a)
	except EOFError:
			break
			
		




			
	


	