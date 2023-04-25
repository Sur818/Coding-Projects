sum=0
def sum_collom(l,n):
		global sum
		for x in l:
			if type(x[0])is list:
				sum+=sum_collom(x,n)
			else:
				sum+=x[n-1]
		return sum

l=eval(input("enter list:-"))
n=int(input("enter collom position:-"))
res=sum_collom(l,n)
print(res)
				
		