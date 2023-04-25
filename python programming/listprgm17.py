def isprime(no):
	f=0
	for i in range(1,no+1):
		if no%i==0:
			f+=1
	if f==2:
			return True
	else:
			return False

		
def first_prime(x,k):
	for data in x:
		if type(data)==type([]):
			first_prime(data)
		else:
			if isprime(data):
				k+=1
	return k


n=int(input("enter no of sublist:-"))
l=[]
for i in range(n):
	l.append(list(map(int,input("enter no in list:--").split(' '))))
print("sort list on the basis of counting prime no :-")
l=sorted(l,key=lambda x:first_prime(x,0))
print(l)