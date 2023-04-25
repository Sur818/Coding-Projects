list=[]
n=int(input("how many no want to enter:-"))
first_max=0
sec_max=0
for i in range(n):
 data=int(input("enter no:-"))
 list.append(data)
temp=list[0]
for x in list:
 if x>first_max:
  first_max=x
for x in list:
 if x>sec_max and x<first_max:
  sec_max=x
 
print("first max=",first_max)
print("second max=",sec_max)