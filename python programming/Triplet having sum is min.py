#triplet having sum is minimum---->
#i<j<k and l[i]<l[j]<l[k]
import sys
def binary_search(array, x, low,high):
	if x==array[high]:
		return array[high]
	while low<=high:
		mid=low+(high-low)//2
		if array[mid]==x:
			return array[mid+1]
		elif array[mid]<x:
			low=mid+1
		else:
			high=mid-1
	return -1

	
		
	
def triplet(l):
	f=0
	min_sum=sys.maxsize
	temp=min_sum
	min_element=[]
	for i in range(len(l)):
		if l[i]<temp:
			temp=l[i]
		min_element.append(temp)
		
	for j in range(1,len(l)-1):
		min1=min_element[j-1]
		temp=l[j::]
		min2=binary_search(sorted(temp),l[j],0,len(temp)-1)
		if min2>l[j] and min1<l[j]:
			print(min1,l[j],min2)
			sum=min1+l[j]+min2
		
			if sum<min_sum:
					f+=1
					min_sum=sum
	if f!=0:
		return min_sum
	else:
		return "Not found"
	


l=eval(input("enter list:-"))
print(triplet(l))