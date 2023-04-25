def LCM(lcm ,a,b):
	if lcm>=a*b:
		return lcm
	elif lcm%a==0 and lcm%b==0:
		return lcm
	return LCM(lcm+b,a,b)
a,b=map(int,input("enter two no:-").split(' ')
)
if a>b:		
	print(LCM(max(a,b),b,a))
else:
	print(LCM(max(a,b),a,b))