import sys
def maxelement_range(l):
	max=-sys.maxsize
	maxsuffix_array=[]
	for i in range(len(l)-1,-1,-1):
		if l[i]>max:
			max=l[i]
		maxsuffix_array.append(max)
	return maxsuffix_array[::-1]
	
	
l=eval(input("enterlist:-"))
print(maxelement_range(l))
	