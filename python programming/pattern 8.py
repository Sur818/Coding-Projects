n=int(input("enter no of row:-"))
sum=0
for i in range(n,0,-1):
  for j in range(n,i-1,-1):
  	print(j,end='')
  print('\n',end='')