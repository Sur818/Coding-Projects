import math
n=int(input('enter no of term:-'))
ans=0
for i in range(1,n+1):
 sum=0
 for j in range(1,i+1):
  print(j,end='')
  if j<i:
   print('+',end='')
  sum=sum+j
 print(f'/{i}!',end='')
 if i<n:
   print(' + ',end='')
 ans=ans+sum/math.factorial(i)
print("\n sum of seriese=",ans)
       