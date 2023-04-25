n=int(input("enter a no:-"))
def prime(n):
 f=0
 for i in range(2,int(n/2)+1):
  if n%i==0:
   f=1
 if f==0:
  return True
 else:
  return False
	   
def fact(n):
 f=1
 for i in range(1,n+1):
  f*=i
 return f	   

sum=0
for x in str(n):
 sum=sum+fact(int(x))
if prime(sum):
 print("suraj no")
else:
 print("not suraj no:-")
 