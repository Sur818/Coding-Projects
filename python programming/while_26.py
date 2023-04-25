n=int(input("enter no:-"))
i=1
k=1
sum=0
while k<=n:
 print(i,end=' ')
 if k<n:
  print(' + ',end='')
 sum=sum+i
 i=i*2
 k+=1
print('\n sum of seriese=',sum)
 
 