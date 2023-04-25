n=int(input("enter range:-"))
for i in range(n+1):
 z=i
 sum=0
 while(z>0):
  z1=z%10
  sum=sum+z1*z1*z1
  z=z//10
 if sum==i:
  print(i)
 

   
 		