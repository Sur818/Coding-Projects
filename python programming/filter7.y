n=int(input("enter no:-"))
def func(i):
	print(n,"*",i,"=",n*i)
	return n*i

ans=list(map(func,[x for x in range(1,11)]))
print("sum of table=",sum(ans))
