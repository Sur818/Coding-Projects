import math
n=int(input("enter no of term:-"))
sum=0
sign=1
for i in range(1,n+1):
 print(f'{i}/{i+1}',end='')
 sum=sum+(sign*(i/(i+1)))
 sign=math.pow(-1,i+1)
 if sign>0 and i<n:
  print(' + ',end='')
 elif sign<0 and i<n:
  print(' - ',end='')
print("sum of seriese=",sum)
  
 