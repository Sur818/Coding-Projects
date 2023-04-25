#print(1/a+1/a*r + 1/a*(r+d) + 1/a*(r+2d)+----------)
n=int(input("enter no of term:-"))
a=int(input("enter first term:-"))
r=int(input("enter  multiplication variable:-"))
d=int(input("enter varriable:-"))
sum=0
for i in range(n):
 print(f'1/{a}',end='')
 a=a*r
 sum+=1/a
 r+=d
 if i<n:
  print(" + ",end='')
    
print('\n sum of seriese=',sum)
    
	