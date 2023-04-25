#prgm to find maxisum triple---->
import sys
def maxsum_triplet(l):
	max1=-sys.maxsize
	max2=-max1
	max3=-max2
	for i in range(len(l)):
		if l[i]>max1:
			max3=max2
			max2=max1
			max1=l[i]
			
		if l[i]>max2:
			max3=max2
			max2=l[i]
		if l[i]>max3:
			max3=l[i]
	return (max1+max2+max3)
	
l=eval(input("enter list:-"))
print(maxsum_triplet(l))
		