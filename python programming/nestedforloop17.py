import math
n=int(input('enter no of term :-'))
ans=0
sum1=0
sum2=0
for j in range(1,n+1):
 term=1
 k=2
 while term<=j:
  f=0
  for i in range(1,k+1):
   if k%i==0:
    f+=1
  if f==2:
   print(f'{k}',end='')
   sum1+=k
   if term<j:
    print('+',end='')
   term+=1
  k+=1
 print('/',end='')
 term=1
 k=2
 while term<=j:
  f=0
  for t in range(1,k+1):
   if k%t==0:
    f+=1
  if f<=2:
   sum2+=math.factorial(k)
   print(f'{k}!',end='')
   if term<j:
    print('+',end='')
   term+=1
  k+=1
 if j<n:
  print(' + ',end='')
 ans=ans+sum1/sum2
 sum1=0
 sum2=0
print('\n sum of seriese=',ans)
   
     
 	

		
 
		
	

		
		