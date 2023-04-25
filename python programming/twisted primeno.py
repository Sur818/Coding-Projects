#a prime no which reverse is also a prime no is called Emirp prime no:----
def isprime(n):
	f=0
	for i in range(1,n+1):
		if n%i==0:
			f+=1
	if f==2:
		return True
	else:
		return False


n=input("enter no:-")
if isprime(int(n)) and isprime(int(n[::-1])):
	print("Emirp prime no:-")
else:
	print("not Emirp prime no:-")