n=int(input("enter range:-"))
sum=0
for i in range(1,n+1):
 print("{}/{}".format('1',i),end='')
 if(i<n):
  print("+",end='')
 sum=sum+1/i
print("sum of seriese=",sum)
  
  
 