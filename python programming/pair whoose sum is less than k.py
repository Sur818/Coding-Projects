# count pair whoose sum is less than k
def count_pairlessk(l,n,m):
	j,k=0,n-1
	res=0
	while j<k:
		sum=l[j]+l[k]
		if sum>=m:
			k-=1
		else:
			res+=(k-j)
			j+=1
	return res
		
				
				



l=eval(input("enter list:-"))
k=int((input("enter target:-")))
print(count_pairlessk(sorted(l),len(l),k))
			
			
			
				
			
	