n=int(input("enter range:-"))
sum=0
for i in range(1,n+1):
 if i%5==0 and i%2==0:
  continue
 if i<n+1 and i!=1:
  print('+',end='')
 print(i,end='')
 sum=sum+i
else:
  print("sum of seriese=",sum)
print('thank you')
  