n=int(input("enter no of term:-"))
sum=0
for i in range(1,n+1):
 print(f'{i}*{i+1}',end='')
 sum=sum+(i*(i+1))
 if i<n:
  print("+",end='')
print("sum of seriese=",sum)

  