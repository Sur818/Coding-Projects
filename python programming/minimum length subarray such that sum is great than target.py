#min length of positive subarray whose sum>target
#complexity=O(n)
def sumis_x(l,n,x):
	sum=0
	minLength=n+1
	start,end=0,0
	while end<n:
		while sum<=x and end<n:
			sum+=l[end]
			end+=1
		while sum>x and start<n:
			if end-start<minLength:
				minLength=end-start
			sum-=l[start]
			start+=1
	return minLength
			
			
	
l=eval(input("enter list:-"))
k=int(input("enter target:-"))
ans=sumis_x(l,len(l),k)
if ans==len(l)+1:
	print("not found")
else:
  print("fond subarray of size=",ans)	
	
	