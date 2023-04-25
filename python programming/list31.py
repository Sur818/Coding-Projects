def isprime(n):
	f=0
	for i in range(1,n+1):
		if n%i==0:
			f+=1
	if f==2:
		return True
	else:
		return False

s=[]
l=[]
n=int(input("enter size:-"))
l=[int(input(f"l[{x}]=")) for x in range(n)]
	for i in range(n):
		if isprime(l[i]):
			s.append(l[i])
	
			
	
print("after deleting prime no:-")
for x in s:
	l.remove(x)
print(l)
del(s)
	