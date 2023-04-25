n=int(input("enter range:-"))
sum=0
for i in range(1,n+1):
 prod=1
 for j in range(1,i+1):
 	print(j,end='')
 	if j<i:
 	 print("*",end='')
 	prod=prod*j
 sum=sum+prod
 if(i<n):
  print("+",end='')
print("sum of seriese={}".format(sum))
