def triplet_less(l,a):
	res=0
	for i in range(len(l)-2):
		k=i+1
		j=len(l)-1
		while k<j:
			sum=l[i]+l[k]+l[j]
			if sum>a:
				j-=1
			else:
				res+=j-k
				k+=1
	return res
	
			
	

def tripletsum_ranges(l,a,b):
	for i in range(len(l)):
		res=triplet_less(l,b)-triplet_less(l,a-1)
	return res
	
l=eval(input("enter array:-"))
a,b=map(int,input("enter two no:-").split(' '))
print(tripletsum_ranges(l,a,b))