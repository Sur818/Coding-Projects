def isprime(x):
	f=0
	for i in range(2,int(x/2)+1):
		if x%i==0:
			f=1
	if f==0 and x!=1:
		return True
	else:
		return False
	



def func(a,b):
	if isprime(a+b):
		print(a," ",b)
		
l1=[]
n=int(input("how many data want to enter in list:-"))
for i in range(n):
	data=int(input("enter data:-"))
	l1.append(data)
l2=[]
n=int(input("how many data want to enter:--"))
for i in range(n):
	data=int(input("enter data:-"))
	l2.append(data)
print("sum of respective no in list whose sum is prime:-")
list(map(func,l1,l2))
	

