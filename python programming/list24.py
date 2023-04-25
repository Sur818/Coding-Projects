l=[]
n=int(input("enter size:-"))
l=[int(input(f"l[{x}]=")) for x in range(n)]
print("enter 1 to delete element:- ")
print("enter 2 to check list:-")
print("enter 3 to exit:-")
while True:
	choice=int(input("enter choice:-"))
	if choice==1:
		no=int(input("enter element want to delete:-"))
		try:
			l.remove(no)
		except ValueError:
			print("element not present:-")
	if choice==2:
			print(l)
	if choice==3:
			exit(0)
			
	 	