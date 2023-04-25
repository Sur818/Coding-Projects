def func(a):
	if a%2==0:
		return a
l=[]
n=int(input("how many no want to enter:;"))
for i in range(n):
	data=int(input("enter no :-"))
	l.append(data)
l=list(map(func,l))
print(l)
 
