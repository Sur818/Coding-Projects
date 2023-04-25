import math
n=int(input("how many no of wants to get LCM:-"))
list=[]
for i in range(n):
 data=int(input("enter no:-"))
 list.append(data)
prod=math.prod(list)
for i in range(max(list),(prod+1)):
 f=0
 for x in list:
  if i%x!=0:
   f=1
 if f==0:
   break
print(i)
   

 
