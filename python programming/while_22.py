n=int(input("enter no:-"))
print(f"factor of {n}:-")
i=2
while i<=n:
	if n%i==0:
	  f=0
	  for j in range(2,int(i/2+1)):
	  	if i%2==0:
	  	 f=1
	  if f==0:
	      print(i)
	i+=1
	
	 