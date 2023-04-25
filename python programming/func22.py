def func(n):
	sum=0
	for i in range(2,n+1,2):
		print(i)
		sum+=i
	return sum
n=int(input("enter range:-"))
print("sum=",func(n))