n=int(input("enter range:-"))
for i in range(n):
 z=i
 length=len(str(z))
 sum=0
 for j in range(length):
  z1=z%10
  sum=sum*10+z1
  z=z//10
 if sum==i:
  print(i)

  
 
	