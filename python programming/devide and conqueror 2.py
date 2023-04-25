def binary_search(arr,l,r,m):
	if r>=l:
		mid=(l+r)//2
		if arr[mid]==m:
			return mid-1
		elif arr[mid]>m:
			return binary_search(arr,l,mid-1,m)
		else:
			return binary_search(arr,mid+1,r,m)
	else:
		return -1

l=eval(input("enter data:-"))
l.sort()
m=int(input("enter target:-"))
index=binary_search(l,0,len(l)-1,m)
if index!=-1:
	print("just smaller value than target::")
	print(l[index])
else:
	print("element not found")