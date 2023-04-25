sum=0
def squre_no(i,n):
	if i>n:
		return globals()['sum']
	print(f"{i}*{i}",end='')
	if i<n:
		print("+",end='')
	globals()['sum']+=i*i
	return squre_no(i+1,n)
	
n=int(input("enter range:-"))
print("\nsum of squre seriese=",squre_no(1,n))
			