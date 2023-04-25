n=int(input("enter range:-"))
sum=0
for i in range(1,n+1):
 print("{}*{}*{}".format(i,i,i),end='')
 if i<n:
  print("+",end='')
 sum=sum+i*i*i
print('\n sum of serise=',sum)