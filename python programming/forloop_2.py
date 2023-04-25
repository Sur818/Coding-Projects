n=int(input("enter no of term:-"))
sum=1
print("1",end='+')
for i in range(1,n):
 print(f'{i+1}/{i}',end='')
 if i<n-1:
  print('+',end='')
 sum=sum+(i+1)/i
print("sum of seriese=",sum)