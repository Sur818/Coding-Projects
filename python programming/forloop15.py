n=int(input("enter no:-"))
length=len(str(n))
sum=0
for i  in range(length):
  n1=n%10
  sum=sum+n1
  n=n//10
print("sum of digits ={}".format(sum))