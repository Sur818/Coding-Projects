n=int(input("enter no:-"))
z=n
sum=0
while n>0:
 n1=n%10
 sum=sum+n1*n1*n1
 n=n//10
if z==sum:
 print("armstrong no:-")
else:
 print(" not armstrong no:-")
