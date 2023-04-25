import math
n=int(input("enter range:-"))
sum=0
for i in range(1,n+1):
 print(f"1/{i}^{i}",end='')
 if i<n:
  print(" + ",end='')
 m=math.pow(i,i)
 sum=sum+1/m
print("sum of series:-",sum)