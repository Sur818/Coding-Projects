n=int(input("enter any no:-"))
sum=0
for i in range(1,n+1):
	if i%5==0:
		continue
	if i<n+1 and i!=1:
		print('+',end='')
	print(f'1/{i}',end='')
	sum+=1/i
print("\nsum of seriese=",sum)
	
	