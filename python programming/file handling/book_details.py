from pickle import load,dump
f=open("book_details.dat",'wb')
op=1
while True:
	if op==1:
		no=int(input("enter book no:-"))
		name=input("enter book name:-")
		Author_name=input("input Author name:-")
		price=int(input("enter price:-"))
		dump([no,name,Author_name,price],f)
	op=int(input("enter 1 to add more details for exit enter 0:-"))
	if op==0:
		break