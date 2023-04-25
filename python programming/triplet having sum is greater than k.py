#count triplet whoose  sum is greater than k---->
def triplet_sumgreaterthank(l,m):
	l.sort()
	res=0
	for i in range(len(l)-2):
		k=i+1
		r=len(l)-1
		while k<r:
			sum=l[i]+l[k]+l[r]
			if sum<m:
				k+=1
			else:
				res+=r-k
				r-=1
	return res
	
	

l=eval(input("enter list:-"))
n=int(input("enter target:-"))
print(f"count triplet whoose sum greater than target--") 
print(triplet_sumgreaterthank(sorted(l),n)) 

