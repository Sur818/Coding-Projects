list=[]
even=0
odd=0
n=int(input("enter size:-"))
for i in range(n):
 a=int(input("enter no:-"))
 list.append(a)
 if a%2==0:
  even=even+1
 else:
  odd=odd+1
  
print(list)
print(" no of even no is list=",even)
print("no of odd no in list=",odd)