n=int(input("enter no:-"))
sum=0
for i in range(1,n+1):
 m=i*i
 print("{}/{}*{}".format('1',i,i),end='')
 if(i<n):
  print(" + ",end='')
 sum=sum+1/m
print("\n sum of thease seriese=",sum)
 	