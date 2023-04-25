import math
n=int(input("enter no of  term:-"))
sum=0
for i in range(1,n+1):
 print(f'{i}^{i+1}/{i}',end='')
 m=math.pow(i,(i+1))
 sum+=m/i
 if i<n:
  print(" + ",end='')
  
print('\n sum of seriese=',sum)