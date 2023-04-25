n=int(input("enter range:-"))
sum=0
for i in range(1,n+1):
 f=0
 for j in range(1,i+1):
  if i%j==0:
   f=f+1
 if f>2:
   print(i)
   sum=sum+i
print("sum of all composite no in given range:-")