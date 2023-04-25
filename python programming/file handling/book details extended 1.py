from pickle import dump,load
def showdetails(a):
	print("book_no=",a[0])
	print("book name,=",a[1])
	print("Auther_name=",a[2])
	print("book price=",a[3])
	print("\n")



f=open("book_details.dat",'rb')
name=input("enter auther name to get information about his book:-")
while True:
	try:
		a=load(f)
	
		if str(a[2]).lower()==name.lower():
			showdetails(a)
			
	except:
		break
