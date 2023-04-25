n=int(input("enter range:-"))
sum=0
for i in range(1,n+1):
 m=i/(1-1/(i+1))
 sum=sum+m
 print("{}/1-1/{}".format(i,i+1),end='')
 if i<n:
  print(" + ",end='')
print("sum of seriese=",sum)
  
 
  