n=int(input("enter no of term:-"))
sum=0
for i in range(1,n+1):
 print("{}^2/{}".format(i,i),end='')
 sum=sum+(i*i)/i
 if i<n:
  print(" + ",end='')
print("\nsum of serise=",sum)
 