n=int(input("enter no of term:-"))
k=1
sum=0
for i in range(1,n+1):
 print(f'{i}/{k}*{k+1}',end='')
 if i<n:
  print(" + ",end='')
 sum=sum+i/(k*(k+1))
 k=k+2
print("sum of seriese=",sum)
 
 
 