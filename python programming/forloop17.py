n=int(input("enter no:-"))
length=len(str(n))
c=0
for i  in range(length):
  n1=n%10
  c=c+1
  n=n//10
print("no of digits=",c)