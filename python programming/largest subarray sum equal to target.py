def subarray_sumequal(l,m):
	dict={}
	sum=0
	res="Not found"
	temp=0
	for i in range(len(l)):
		sum+=l[i]
		dict[sum]=i
		if sum==m:
			return (0,i)
		elif sum-m in dict:
			 k=dict.get(sum-m)
			 if i-(k+1)>temp:
			 	temp=i-(k+1)
			 	res=(k+1,i)
	return res
	
			 
			 
			
			
			
	
l=eval(input("enter list:-"))

m=int(input("enter target:-"))
print(subarray_sumequal(l,m))