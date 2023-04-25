#maximum sum triplet:::----->
#using set 
#using suffix array approach to find max element
#using binary search to get just smaller value than target
#complexity O(n^3)---->O(nlogn)
import sys
def leftmax_prefix(arr,target):
	start=0
	end=len(arr)-1 
	if target>arr[end]:
		return end
	ans=-1
	while start<=end:
		mid=(start+end)//2
		if arr[mid]>=target:
			end=mid-1
		else:
			ans=mid
			start=mid+1
	return arr[ans]
	

def maxsum_triplet(l,n):
	a= {}
	a=set()
	max_sum=-sys.maxsize
	rightmax_suffix=[]
	for i in range(n-1,-1,-1):
		if l[i]>max_sum:
			max_sum=l[i]
		rightmax_suffix.append(max_sum)
	rightmax_suffix=rightmax_suffix[::-1]
		
	
	a.add(l[0])
	for j in range(1,n-1):
		a.add(l[j])
		max1=rightmax_suffix[j]
		max2=leftmax_prefix(list(a),l[j])
		if max1>l[j] and max2<l[j]:
			max_sum=max(max_sum,max1+l[j]+max2)
			
	return max_sum
	
	
l=eval(input("enter list:-"))
print(maxsum_triplet(l,len(l)))
		
	
		
	
				
				
				
				
			
			
			
			
			
			
			