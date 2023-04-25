n=int(input("enter range:-"))
i=1
sum=0
for k in range(1,n+1):
 if i<=n:
  print(f'1/{i}',end='')
  sum+=1/i
  i*=3
  if i<n:
   print(' + ',end='')
print("\nsum of seriese=",sum)
	
	