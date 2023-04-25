def seriese1(sum1,n,i):
	if i>n:
		return sum1
	print(i,end='')
	if i<n:
		print("+",end="")
	return seriese1(sum1+i,n,i+1)

def seriese(n,sum,i,k):
	if i>n:
		return sum
	sum1=seriese1(0,k,1)
	print(f'/{k}',end='')
	if i<n:
		print(" + ",end='')
	return seriese(n,sum+sum1/k,i+1,k+2)



n=int(input("enter range:-"))
print("\nsum of seriese=",seriese(n,0,1,1))