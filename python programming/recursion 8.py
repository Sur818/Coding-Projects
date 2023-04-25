def func(i,n):
	if i==n:
		print(i)
		return n
	else:
		print(i)
		return i+func(i+1,n)


n=int(input("enter range:-"))
print("sum of seriese=",func(1,n))