n=int(input("enter no of term:-"))
sum=1
temp=1
k=temp*2
print('1',end=' + ')
for i in range(n-1):
  print(f'{k}',end='')
  if i<n-2:
  	print(" + ",end='')
  sum+=k
  k=k*temp
  temp=k
print('\n sum of seriese=',sum)
  