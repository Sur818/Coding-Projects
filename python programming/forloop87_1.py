n=int(input("enter no of term:-"))
sum=0
k=1
temp=1
for i in range(1,n+1):
 print(f'1/{k}',end='')
 if i<n:
  print('+',end='')
 sum+=1/k
 temp+=1
 k*=temp
print("\nsum of i seriese=",sum)
     