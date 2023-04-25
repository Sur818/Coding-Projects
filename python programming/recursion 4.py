def prod_list(l,n):
	if n>len(l)-1:
		return 1
	else:
		return int(l[n])*int(prod_list(l,n+1))
	

n=int(input("enter no of item:-"))
l=[input() for x in range(n)]
print("sum of list=",prod_list(l,0))