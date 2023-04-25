n=int(input("enter any no:-"))
flag=0
for i in range(2, int(n/2+1)):
 if(n%i==0):
  flag=flag+1
  print(" not prime")
  break
if(flag==0):
 print("prime")
 
 