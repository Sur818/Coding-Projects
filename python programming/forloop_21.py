n=int(input("enter no:-"))
sum=0
for i in str(n):
 fact=1
 i=int(i)
 for j in range(1,i+1):
    fact*=int(j) 
 sum=sum+fact
if sum==n:
  print("strong no:-")
else:
  print("not perfect no:-")