n=int(input("enter range:-"))
k=1
for i in range(2,n+1):
	f=0
	for j in range(2,int(i/2+1)):
		if i%j==0:
			f=1
	if f==0 and k<=n:
		print(k,end=' , ')
		k+=i
		
	


		
	
		
		
			
