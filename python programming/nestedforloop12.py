n=int(input("enter range of prime:-"))
sum=0
i=1
term=1
while term<=n:
	f=0
	for j in range(1,i+1):
		if i%j==0:
			f+=1
	if f<=2:
		term+=1
		fact=1
		print(i,end='!')
		for k in range(1,i+1):
		    fact*=k
		sum+=fact
		if term<=n:
		  print(' + ',end='')
	i+=1

print('\n sum of seriese=',sum)