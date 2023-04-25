import math
n=int(input("enter no:-"))
temp=n-1
sum=0
for i in range(1,n+1):
 if i%2!=0:
  m=math.pow(i,n)
  print(f'{i}^{n}',end='')
  sum+=m
 else:
  m=math.pow(i,temp)
  print(f'{i}^{temp}',end='')
  sum+=m
  temp-=1
 if i<n:
  print(" + ",end='')
print("\nsum of seriese=",sum)
  
	 