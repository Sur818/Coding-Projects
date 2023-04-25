n=int(input("enter no of term:-"))
sum=0
for i in range(1,n+1):
 fact=1
 for j in range(1,i+1):
  fact=fact*j
 print(f'{i}!',end='')
 if i<n:
  print(' + ',end='')
 sum+=fact
print('\nsum of seriese=',sum)