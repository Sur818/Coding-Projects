def sumsqur_digit(n):
	if n==0:
		return 0
	return (n%10)*(n%10)+sumsqur_digit(n//10)
	

def happyno(n):
	if n==1:
		return True
	if n==4:
		return False
	return happyno(sumsqur_digit(n))

n=int(input("enter range:-"))
for i in range(1,n+1):
	if happyno(i):
		print(i)