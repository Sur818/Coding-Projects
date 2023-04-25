n=int(input("enter no of term:-"))
sum=0
prod=1
for i in range(1,n+1):
 for j in range(1,2*i+1,2):
  print(j,end="")
  prod=prod*j
  if j<2*i-1:
   print("*",end='')
 if i<n:
  print(" + ",end='')
 sum=sum+prod
 prod=1
print('sum=',sum)