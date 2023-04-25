def table(n):
	sum=0
	for i in range(1,11):
		print(n,'*',i,'=',n*i)
		sum+=n*i
	return sum

n=int(input("enter no:-"))
print("sum of table=",table(n))
	
