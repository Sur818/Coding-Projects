n=int(input("enter no of term:-"))
sign=+1
sum=1
print(1,end='+')
for i in range(2,n+1):
 print(i,end='')
 sum=sum+(sign*i)
 sign=sign*(-1)
 if sign>0 and i<n:
  print('+',end='')
 elif sign<0 and i<n:
  print('-',end='')
print("\nsum of seriese=",sum)