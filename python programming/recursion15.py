def primeno(i,n):
	if i==1:
		return True
	elif n%i==0:
			return False
	else:
		return primeno(i-1,n)
num=int(input("enter no:-"))
if primeno(num//2,num):
		print("prime no:-")
else:
		print("not prime no:-")
		