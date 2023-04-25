import sys
def maximumSum(list1):
    maxi = -sys.maxsize-1
    for x in list1:
    	sum=0
    	for y in x:
    		sum+=y
    	maxi=max(sum,maxi)
    return maxi

list1 = [[-1,-2,-3], [-4,90,-6], [-10, -11,-12], [-7,-8,-9]] 

print(maximumSum(list1))