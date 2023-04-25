n=int(input("enter no of term:-"))
sum=0
for i in range(1,2*n+1,2):
 print("{}/{}".format('1',i),end='')
 if i<(2*n):
  print('+',end='')
 sum=sum+1/(i)
print("sum of seriese=",sum)
 