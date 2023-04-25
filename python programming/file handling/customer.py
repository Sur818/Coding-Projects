import  pickle
f=open("customer.dat",'wb+')
while True:
	op=int(input("enter 1 for fill customer detail and 0 for exit:-"))
	if op==1:
		name=input("enter input name:-")
		age=input("enter age:-")
		amount=input("enter amount:-")
		pickle.dump([name,age,amount],f)
	if op==0:
		break
		
		