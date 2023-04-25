print("sorted the list on the besis of no of prime no present in sublist:-")
def isprime(x):
	f=0
	for i in range(1,x+1):
		if x%i==0:
			f+=1
	if f==2:
		return True
	else:
		return False



def count_isprime(l):
	f=0
	for x in l:
		if isprime(x):
			f+=1
	return f


	
n=int(input("enter no of sublist:-"))
l=[]
for i in range(n):
	l.append(list(map(int,input("enter no in list:-").split(' '))))
l=sorted(l,key=lambda x:count_isprime(x))
print(l)