list=[]
list1=[]
n=int(input("how many data want to enter:-"))
for i in range(n):
 data=input("enter data:-")
 list.append(data)
for j in range(len(list)-1):
 list1.append(list[j])
 list1.append(list[j+1:len(list)])
print(list1)
 
 
 
 

