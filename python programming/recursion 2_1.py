def Recurgcd(a,b):
	if b==0:
		return a
	elif b==a:
		return b
	else:
		return Recurgcd(b,a%b)
	
num1=12
num2=14
print("Given numbers are",num1,'and',num2)
print("GCD=",Recurgcd(num1,num2))