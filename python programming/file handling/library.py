from pickle import dump,load
def create_file(chapter_name):
	f=open(f"{chapter_name}.txt",'w')
	f.write(input(f"enter txt in txtfile {chapter_name}:-"))
	


def create_library():
	f=open("library.dat",'wb')
	op='Yes'
	while True:
		if op=='Yes':
			book_name=input("enter book_name:-")
			author_name=input("enter author name:-")
			n=int(input("enter no of chapter in this book:-"))
			dict1={}
			for i in range(n):
				chapter_name=input("enter chapter name:-")
				create_file(chapter_name)
				file=f"{chapter_name}.txt"
				dict1[chapter_name]=file
			price=input("enter book price:-")
			dump([book_name,author_name,dict1,price],f)
		op=input("enter Yes to add more book\nenter No to exit:-")
		if op=='No':
			break
	



def read_book():
	f=open("library.dat",'rb')
	book=input("enter book name you want to read:-")
	chap_name=input("enter chapter name:-")
	while True:
		try:
			a=load(f)
			if str(a[0])==book:
				ans=a[2][f"{chap_name}"]
				f2=open(f"{ans}",'r')
				print(f2.read())
		except:
			break
print("1:-enter for create librarry")
print("2:-read book")
print("3:-exit")
op=int(input("enter choice:-"))		
while 1:
	if op==1:
		create_library()
	if op==2:
		read_book()
	print("1:-enter for create librarry")
	print("2:-read book")
	print("3:-exit")
	op=int(input("enter choice:-"))
	if op==3:
		break
	
	
	
		
		
	

	
