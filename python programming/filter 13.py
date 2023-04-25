def isprime(n):
	f=0
	for i in range(1,int(n/2+1)):
		if n%i==0:
			f+=1
	if f<=2:
		return True
	else:
		return False

def func(a):
	if a in l2 and isprime(a):
		return True
		
n1=int(input("enter no of term in list1:-"))	
l1=[int(input(f"l1[{x+1}]=")) for x in range(n1)]
n2=int(input("enter no of term in list2:-"))
l2=[int(input(f"l2[{x+1}]=")) for x in range(n2)]
print(list(filter(func,l1)))

