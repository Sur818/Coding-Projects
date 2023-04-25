# 1 2 1 2 1 4 1 16 1 256     
#next term is product of alternate previous:---
import math
l=[]
for n in range(1,11):
 if n==1:
  print('1',end=' ,')
 elif n==2:
  l.append(2)
 elif n%2!=0:
  print('1',end=', ')
 elif n%2==0:
  print(math.prod(l),end=' , ')
  l.append(math.prod(l))
	