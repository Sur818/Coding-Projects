a=int(input("enter first term:-"))
d=int(input("enter common difference:-"))
n=int(input('enter last of term:-'))
if (n-a)%d==0:
 sum=0
 for i in range(a,n+1,d):
  print(i,end='')
  if(i<n-1):
   print("+",end='')
   sum=sum+i
 print("\nsum of seriese=",sum)
else:
  print("last term is not part of a.p")
  