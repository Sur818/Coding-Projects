n=int(input("enter range:-"))
i=1
sum=0
while i<=n:
 if(i%2!=0):
  print(i)
  sum=sum+i
 i+=1
print("sum of odd natural seriese:-",sum)