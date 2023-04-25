n=int(input("enter range of prime:-"))
sum=0
for i in range(1,n+1):
	f=0
	for j in range(1,i+1):
		if i%j==0:
			f+=1
	if f<=2:
		fact=1
		print(i,end='!')
		for k in range(1,i+1):
		    fact*=k
		sum+=fact
		if i<n:
		  print(' + ',end='')
print('\n sum of seriese=',sum)
		  
		  
		  
		  
		  
	   
		
   
	
	
	
    
		
		
	
		
	
		
		