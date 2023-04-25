def sum_collom(l,m):
	sum=0
	for x in l:
		sum+=x[m-1]
	return sum



l=eval(input("enter list:-"))
n=int(input("enter collom:-"))
print(sum_collom(l,n))