import pickle
def createfile():
   fobj=open("Book.dat","ab")
   BookNo=int(input("Enter Book Number : "))
   Book_name=input("Enter book Name :")
   Author = input("Enter Author name: ")
   Price = int(input("Price of book : "))
   rec=[BookNo, Book_name ,Author, Price]
   pickle.dump(rec, fobj)
   fobj.close()
   
def countrec(Author):
   fobj=open("Book.dat", "rb")
   num = 0
   try:
      while True:
         rec=pickle.load(fobj)
         if Author==rec[2]:
            num = num + 1
            print(rec[0],rec[1],rec[2],rec[3])
   except:
   	fobj.close()
   return num
   
createfile()
