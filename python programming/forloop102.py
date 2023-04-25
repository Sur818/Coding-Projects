n=int(input("enter posn of term,you want:-"))
sum=0
for i in range(1,n+1):
	k=1
	for j in range(i,0,-1):
		k=k*j
	print(f'{k}',end='')
	if i<n:
		print(' , ',end='')
print('\n',f'{n}th term of seriese=',k)
