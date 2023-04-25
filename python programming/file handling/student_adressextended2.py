from pickle import load
def showdetails(a):
	print("name=",a[0])
	print("age=",a[1])
	print("roll_no=",a[2])
	print("adress=",a[3])

f=open("student_adress.dat",'rb')
pin=input("enter pin to get details:-")
while True:
	try:
		a=load(f)
		for x in a:
			#print(type(x))
			if str(x).find(f"pincode-{pin}")!=-1:
				showdetails(a)
	except:
		print("thank you!")
		break