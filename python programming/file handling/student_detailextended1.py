import pickle
def showdetails(a,per):
	for x in a:
		print(x,"=",a[x])
	print("percentage=",per)
	print("\n")


f=open("student_detail.dat",'rb')
perc=int(input("enter perceantage criteria:-"))
print("student whos perc above from criteria:--")
while True:
	try:
		a=pickle.load(f)
		per=(sum(a["subject_detail"].values()))/len(a["subject_detail"])
		if per>=perc:
			showdetails(a,per)
	except:
		break