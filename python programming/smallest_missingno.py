def smallest_positiveno(l,start,end):
	if start>end:
		return start
	if l[start]!=start:
		return start
	elif start<=end:
		mid=(start+(end-start)//2)
		if l[mid]==mid:
			return smallest_positiveno(l,mid+1,end)
		return smallest_positiveno(l,start,mid-1)




l=list(map(int,input("enter no:-").split(' ')))
print(smallest_positiveno(l,0,len(l)-1))