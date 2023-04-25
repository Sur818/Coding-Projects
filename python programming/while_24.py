n=int(input("enter no :-"))
i=2
print(n,"=",'1',end='')
while i<=n:
	if n%i==0:
	 n=n//i
	 print('*',i,end='')
	else:
	 i+=1