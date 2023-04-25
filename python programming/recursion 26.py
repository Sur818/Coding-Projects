def sumsqur_digit(n):
	if n==0:
		return 0
	return (n%10)*(n%10)+sumsqur_digit(n//10)
	

def happyno(n):
	if n==1:
		return 1
	if n==4:
		return 4
	return happyno(sumsqur_digit(n))

n=int(input("enter no:-"))
if happyno(n)==1:
	print('happy no:-')
else:
	print('not happy no:-')
	