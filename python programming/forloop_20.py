n=int(input("enter range:-"))
for i in range(1,n+1):
 sum=0
 for j in str(i):
  fact=1
  j=int(j)
  for  k in range(1,j+1):
   fact*=k
  sum+=fact
 if sum==i:
  print(i)
 
	  	
	