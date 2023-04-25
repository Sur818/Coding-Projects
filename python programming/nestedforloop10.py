n=int(input("enter range of pime::-"))
sum=0
k=1
for i in range(2,n+1):
	f=0
	for j in range(2,int(i/2)+1):
		if i%j==0:
			f=1
	if f==0:
		if i<=n and k!=1:
			print(' + ',end='')

		print(f'{k}/{i}',end='')
		sum+=k/i
		k+=1
		
print("\b\n sum of seriese=",sum)
	
		
		
		
		