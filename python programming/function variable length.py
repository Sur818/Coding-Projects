def gcd(*a):
	for i in range(1,min(a)+1):
		f=0
		for x in a:
			if x%i!=0:
				f+=1
		if f==0:
			gcd=i
	return gcd
		
print(gcd(10,20,80,40,50,60))