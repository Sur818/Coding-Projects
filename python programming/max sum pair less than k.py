#largst pair with sum<k
def pair_sumlessk(l,sum):
	l.sort()
	p=len(l)
	for i in range(len(l)):
		if l[i]>=sum:
			p=i
			break
	max_sum=0
	for i in range(p):
		for j in range(i+1,p):
			if l[i]+l[j]<sum and l[i]+l[j]>max_sum:
				max_sum=l[i]+l[j]
				a=l[i]
				b=l[j]
	return (a,b)
	
	
	

l=eval(input("enter list:-"))
k=int(input("enter target:-"))
print(pair_sumlessk(l,k))
				
				