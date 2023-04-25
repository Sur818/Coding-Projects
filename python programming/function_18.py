def natural_no(n):
	sum=0
	for i in range(1,n+1):
		print(i)
		sum+=i
	print("sum of no in given range:-",sum)
		

n=int(input("enter range:-"))
natural_no(n)
