n=int(input("enter range:-"))
print("all perfect no in given range:-")
for i in range(1,n+1):
 sum=0
 for j in range(1,i):
    if i%j==0:
     sum+=j
 if sum==i:
   print(i)
  