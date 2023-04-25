n=int(input("enter range:-"))
sum=0
for i in range(1,n+1,1):
 print("{}/{}".format(i,(i+1)),end='')
 if  i<n:
  print(" + ",end='')
 sum=sum+i/(i+1)
print("sum of seriese=",sum)
 