n=int(input("enter range:-"))
i=2
while i<=n:
 f=0
 j=2
 while j<=i//2:
  if i%j==0:
   f=1
  j+=1
 if f==0:
  print(i)
 i+=1
