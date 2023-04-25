import itertools 
import functools
def func(l):
	return max(l,key=lambda x:functools.reduce(lambda a,b:a*b,x))




l=eval(input("enter data in list"))
print("sublist whoose product is max:-")
res=[]
for i in range(len(l)):
	for j in range(i+1,len(l)+1):
		res.append(l[i:j])
print(func(res))
		