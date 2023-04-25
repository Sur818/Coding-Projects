sum=0
def ap(a,n,d):
	if n<=0:
		return globals()['sum']
	print(a,end='')
	if n-1>0:
		print("+",end='')
	globals()['sum']+=a
	return ap(a+d,n-1,d)

a,r,n=map(int,input("enter first term common difference and no of term:-").split(' '))
print("\n sum of ap seriese=",ap(a,n,r))
