import math
n=int(input("enter no:-"))
sum=0
for i in range(1,n+1):
 print("{}^{}".format(i,i),end='')
 sum=sum+math.pow(i,i)
 if i<n:
  print("+",end='')
print('\nsum of seriese=',sum)