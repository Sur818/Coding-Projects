n=int(input("enter row::"))
for i in range(n,0,-1):
	k=i
	for j in range(1,(n*i)+1):
		print(i+(n-k),end="")
		if j%k==0:
			i-=1			
	print("\n",end='')


