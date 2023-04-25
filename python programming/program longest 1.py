def longest_consiquitive(l,n):
	ans=0
	i=0
	while i<len(l)-1:
		count=1
		while i+1<len(l) and l[i]==n:
			i+=1
			count+=1
		ans=max(ans,count)
		i+=1
	return ans
	
		
	
l=input("enter 1's and 0's:-")
n=input("enter no which longest consiquitive length you want to check:-")
print(longest_consiquitive(l,n))			
		
		