list=[]
list1=[]
list2=[]
dict={}
n=int(input("how many element want to enter:-"))
for i in range(n):
 data=int(input("enter data:-"))
 list.append(data)
print(list)
for i in range(n):
 if list[i]%2==0:
  list1.append(list[i])
 else :
  list2.append(list[i])
dict['even_no']=list1
dict['odd_no']=list2
print(dict)