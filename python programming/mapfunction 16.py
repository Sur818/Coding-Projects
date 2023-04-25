def isprime(n):
	f=0
	for i in range(1,n+1):
		if n%i==0:
			f+=1
	if f<=2:
		return True
	else:
		return False


def func(a,b):
	if isprime(a*b):
		return a,b
	
n=int(input("enter no of term:-"))
print("enter element in first list:-")
l1=[int(input(f"l1[{x+1}]=")) for  x in range(n)]
print("enter element in second list:-")
l2=[int(input(f"l2[{x+1}]=")) for x in range(n)]
l=list(map(func,l1,l2))
for x in l:
	if x!=None:
		print(x)

