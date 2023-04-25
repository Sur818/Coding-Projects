def HCF(a,b):
	for i in range(1,min(a,b)):
		if a%i==0 and b%i==0:
			hcf=i
	return hcf
	
n1,n2=map(int,input("enter two no::").split(' '))
print("HCF of TWO NO:-",HCF(n1,n2))