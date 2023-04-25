n=int(input("enter no:-"))
z=n
sum=0
while n>0:
 n1=n%10
 fact=1
 for i in range(1,n1+1):
  fact=fact*i
 sum+=fact
 n=n//10
if sum==z:
 print("perfect no:-")
else:
 print("not perfect no:-")
 
 
 	
	