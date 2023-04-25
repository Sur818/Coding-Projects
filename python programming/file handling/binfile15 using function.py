from pickle import load,dump
def create_file():
	f=open("binfile15_func.dat",'wb')
	op='y'
	while True:
		if op=='y':
			book_name=input("enter book name:-")
			book_no=int(input("enter book _no:-"))
			author_name=input("enter author name:-")
			price=int(input("enter price:-"))
			dump([book_name,book_no,author_name,price],f)
		
		op=input("want to add more details[y/n]:-")
		if op=='n':
			break
		
def book_read():
	f=open("binfile15_func.dat",'rb')
	while True:
		try:
			a=load(f)
			print("book name=",a[0])
			print("book no:-",a[1])
			print("author name=",a[2])
			print("price =",a[3])
			print("\n")
		except EOFError:
			break

def sort_book():
	f=open("binfile15_func.dat",'rb')
	l=[]
	while True:
		try:
			a=load(f)
			l.append(a)
		except:
			l.sort(key=lambda a: a[3])
			for x in l:
				print(x)
			break
			
			

def read_perticuler(name,f):
	while True:
		try:
			a=load(f)
			if a[0]==name:
				print("book name=",a[0])
				print("book no:-",a[1])
				print("author name=",a[2])
				print("price =",a[3])
		except:
			break
	
def count_book(author):
	f=open("binfile15_func.dat",'rb')
	c=0
	while True:
		try:
			a=load(f)
			if a[2]==author:
				c+=1
		except EOFError:
			break
	print("no of book written by this author=",c)
			
			
print("enter 1 to create book:-")
print("enter 2 to read all book:-")
print("enter 3 read perticuler book:-")
print("enter 4 to count no of books writen by a perticuler author:-")
print("enter 5 to sort book according to its price:-")
print("enter 0 to exit:-")
while True:
	op=int(input("enter choice:-"))
	if op==1:
		create_file()
	if op==2:
		book_read()
	if op==3:
		name=input("enter book name want to read:-")
		read_perticuler(name,open("binfile15_func.dat",'rb'))
	if op==4:
		author=input("enter author name:-")
		count_book(author)
	if op==5:
		sort_book()
	if op==0:
		break
					
					
			
	
		
		
		
	
	