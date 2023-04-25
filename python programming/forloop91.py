#print(a1/a2 + a1*r/a2+d + a1*r^2/a2+2d + a1*r^3/a2+3d + -------)
n=int(input("enter no of term:-"))
print('enter first term of gp and common ratio:-')
a1,r=map(int,input().split(' '))
print("enter first term of gp and common diffrence:-")
a2,d=map(int,input().split(' '))
sum=0
first=a1
second=a2
for i in range(1,n+1):
 print(f'{first}/{second}',end='')
 sum+=first/second
 first=first*r
 second=second+d
 if i<n:
  print(" + ",end='')
print("\n sum of seriese=",sum)
 	
