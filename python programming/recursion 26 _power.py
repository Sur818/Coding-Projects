def power(a,b):
	if b==0:
		return 1
	else:
		return a*power(a,b-1)

a=int(input("enter no:-"))
b=int(input("enter power:-"))
print(power(a,b))