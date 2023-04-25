sum=0
def gp(i,n,r):
	if n<=0:
		return globals()['sum']
	print(i,end='')
	if n-1>0:
		print("+",end='')
	globals()['sum']+=i
	return gp(i*r,n-1,r)

a,r,n=map(int,input("enterfirsr term common ratio and no of term:-").split(' '))
print("\n sum of gp seriese=",gp(a,n,r))


	