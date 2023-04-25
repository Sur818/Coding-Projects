k=0
def func(a):
	global k
	if a in l1:
		i=l1.index(a)
		l1[i]=b[k]
		k+=1
		return 

l1=input("enter no:-").split(' ')
a=input("enter no want to replace:-").split(' ')
b=input("enter from which respective element:-").split(' ')
list(map(func,a))
print(l1)
