n=int(input("enter how many no of want to enter;:-"))
list=[]
list1=[]
for i in range(n):
 data=int(input("enter no:-"))
 list.append(data)
for i in range(1,(min(list)+1)):
 f=0
 for x in list:
  if x%i!=0:
   f=1
 if f==0:
  list1.append(i)
print("hcf of all given no=",max(list1))
 