n=int(input("enter no of term:-"))
print('1 + ',end='')
sum=1
for i in range(2,n+1):
 print(f'{i}/{i}^2-{i}',end='')
 if( i<n):
  print(" + ",end='')
 temp=(i*i)-i
 sum=sum+i/(temp)
print("\nsum of seriese=",sum)
