def ispronic(n):
	f=0
	for i in range(0,n+1):
		if i*(i+1)==n:
			f+=1
			return True
	if f==0:
		return False
n=int(input("enter range:-"))
for i in range(0,n+1):
	if ispronic(i):
		print(i)