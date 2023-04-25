import math
n=int(input("enter no of term:-"))
sum=0
for i in range(1,n+1):
 print(f'{i}/{i}^{i}',end='')
 if i<n:
  print("+",end='')
 m=math.pow((i),i)
 sum=sum+i/m
print("sum of seriese=",sum)
 