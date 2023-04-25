#searching in sorted array:----
def binary_search(l,start,end,no):
	if start<=end:
		mid=(start+end)//2
		if l[mid]==no:
			return mid
		elif l[mid]>no:
			return binary_search(l,start,mid-1,no)
		else:
			return binary_search(l,mid+1,end,no)
	else:
		return -1
		
	

l=list(map(int,input("enter no:-").split(' ')))
no=int(input("enter no want to search:-"))
print("element found at index=",binary_search(l,0,len(l),no))