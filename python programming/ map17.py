def iscomposite(n):
	f=0
	for i in range(1,n+1):
		if n%i==0:
			f+=1
	if f>2:
		return True
	else:
		return  False


def func(a):
	if iscomposite(a):
		return a
	

n=int(input("enter no of term:-"))
l=[int(input(f"l[{x+1}]=")) for x in range(n)]
x=list(map(func,l))
print("composite element present in list:--")
for i in x:
	if i!=None:
		print(i)
