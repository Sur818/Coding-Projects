n=int(input("enter no of term:-"))
for i in range(1,n+1):
	for j in range(1,n+1-i):
		print(" ",end='')
	for j in range(1,2*i):
		print('*',end='')
	print('')
	