import sys
def pair_sum(x,m):
		if len(x)<2:
			print("invalid input!")
			return
		l=0
		r=len(x)-1
		x=sorted(x)
		diff=sys.maxsize
		while l<r:
			if abs((x[l]+x[r])-m)<diff:
				diff=abs((x[l]+x[r])-m)
				min_l=l
				min_r=r
			if (x[l]+x[r])>m:
				r-=1
			else:
				l+=1
		return (x[min_l],x[min_r])
		
			
	
l=eval(input("enter data:-"))
target=int(input("enter target no:-"))
print(pair_sum(l,target))