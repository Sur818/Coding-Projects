#pair with largest sum is less than k
def sum_pairlessk(l,n,m):
	j,k=0,n-1
	ans=0
	res="Not Found"
	while j<k:
		sum=l[j]+l[k]
		if sum>=m:
			k-=1
		else:
			if sum>ans:
				res=(l[j],l[k])
			ans=max(ans,sum)
			j+=1
	return res
		
				
				



l=eval(input("enter list:-"))
k=int((input("enter target:-")))
print("largest sum which is less than k:-")
print(sum_pairlessk(sorted(l),len(l),k))
			
			