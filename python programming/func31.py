def digit_prod(s):
	prod=1
	for x in s:
		prod*=int(x)
	return prod
n=input("enter no:-")
print(digit_prod(n))