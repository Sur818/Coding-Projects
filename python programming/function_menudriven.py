list=[]
def add_data():
 m=int(input("how many data want to enter:-"))
 for i in range(m):
  data=int(input("enter data :-"))
  list.append(data)
  
def show_data():
 print(list)

def search_data():
 data=int(input("enter data want to search:-"))
 if data in list:
   print('yes')
 else:
   print('not present')
  
def get_summary():
 print("sum of data in list=",sum(list))
 print("avg of data in list=",sum(list)/len(list))
 print(" maxium data in list=",max(list))
 print("minumum data in list=",min(list))
  
print('enter 1 to add new data:-')
print('enter 2 to add all data entered:-')
print('enter 3 to for search item:-')
print('enter 4 for summary of data:-')
print('enter 5 for exit:-')
n=int(input('enter input choice:--'))
while  True:
 if n==1:
   add_data()
   n=int(input('enter input choice::-'))
 elif n==2:
   show_data()
   n=int(input('enter input choice:-'))
 elif n==3:
   search_data()
   n=int(input('enter input choice:-'))
 elif n==4:
   get_summary()
   n=int(input('enter input choice:-'))
 elif n==5:
   break
 else:
   n=int(input("plese enter valid choice:-"))
 
 
  
  
  
 