n=int(input("enter no of term:-"))
sum=0
prod=1
for i in range(1,n+1):
 for j in range(i,0,-1):
  print(j,end='')
  if j>1:
   print("*",end='')
  prod=prod*j
 print(' + ',end='')
 sum=sum+prod
 prod=1
print("\nsum if seriese=",sum)