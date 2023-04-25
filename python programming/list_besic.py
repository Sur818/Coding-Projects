list=[]
n=int(input("how many no want to enter:-"))
for i in range(n):
 data=int(input("enter no:-"))
 list.append(data)
temp=list[0]
for x in list:
 if x>temp:
  first_max=x
  sec_max=temp
  temp=x
 
print("first max=",first_max)
print("second max=",sec_max)