n=int(input("enter no of term:-"))
sum=0
for i in range(1,n+1):
 print(f'{i}/[{i}-({i}/{i+1}^2)]',end='')
 if i<n:
  print("  +  ",end='')
  m=i/((i+1)*(i+1))
 sum=sum+i/(i-m)
print("sum of seriese=",sum)
 