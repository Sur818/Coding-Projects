n=int(input("enter no:-"))
sum=0
for i in range(1,n+1):
 print(i,end='')
 if i<n:
  print("+",end='')
 sum=sum+i
print("\nsum of serise=",sum)