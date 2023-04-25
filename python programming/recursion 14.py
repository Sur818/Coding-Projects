def prime(i,f,n):
	if i>n:
		if f<=2:
			return True
		else:
			return False
	else:
		if n%i==0:
			f+=1
		return prime(i+1,f,n)
		
		
		
		
		
		
n=int(input("enter no:-"))
print(prime(1,0,n))