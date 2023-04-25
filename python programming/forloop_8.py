n=int(input("enter no of term:-"))
sum=0
k=3
for i in range(1,n+1):
 print(f'{i}*{i+1}/{k}*{k+1}',end='')
 if i<n:
  print(' + ',end='')
 sum=sum+((i)*(i+1))/((k)*(k+1))
 k=k+2
print("\nsum of seriese=",sum)
