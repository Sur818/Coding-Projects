n=int(input("enter no of term:-"))
sum=0
for i in range(1,n+1):
 print(f'{i}*{i}',end='')
 if i<n:
  print(" + ",end='')
 sum+=i*i
print("\n sum of seriese=",sum)
 