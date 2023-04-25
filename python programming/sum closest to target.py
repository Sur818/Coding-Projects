import sys
def sumis_x(l,n,x):
	start,end=0,0
	sum=0
	max_Length=0
	diff=sys.maxsize
	while end<n:
		sum+=l[end]
		if abs(sum-x)<=diff:
			if end-start>max_Length:
				diff=abs(sum-x)
				print(l[start:end+1])
				max_Length=end-start
		else:
			sum-=l[start]
			start+=1
		end+=1	
	return max_Length+1
			
			
	
l=eval(input("enter list:-"))
k=int(input("enter target:-"))
ans=sumis_x(l,len(l),k)
print(ans)	
	
	