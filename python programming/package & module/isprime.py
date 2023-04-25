def prime(x):
	f=0
	for i in range(1,x+1):
		if x%i==0:
			f+=1
	if f<=2 and x!=1:
		return True
	else:
		return False
			
			
def is_prime(l):
	for x in l:
		x=int(x)
		if prime(x):
			yield x

