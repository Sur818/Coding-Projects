def isprime(x):
	f=0
	for i in range(2,int(x/2)+1):
		if x%i==0:
			f=1
	if f==0 and x!=1:
		return True
	else :
		return False
	



def func(a):
	if isprime(a):
		return a
	else :
		return 0
			
			
l=[]
n=int(input("how many no want to enter:--"))
for i in range(n):
	data=int(input("enter no:-"))
	l.append(data)
l=list(map(func,l))
print(l)
