def func(n):
	sum=0
	for i in range(n,0,-1):
		print(i)
		sum+=i
	print("sum=",sum)


n=int(input("enter range:-"))
func(n)
   
