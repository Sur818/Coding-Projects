sum=0
def sum_digit(n):
	if n==0:
		return globals()['sum']
	globals()['sum']+=n%10
	return sum_digit(n//10)

n=int(input("enter no:-"))
print(sum_digit(n))