#prgm to find triplet having sum closest to target:---->
import sys
def triplet_closesttarget(l,m):
	diff=sys.maxsize
	l.sort()
	for i in range(len(l)-2):
		start=i+1
		end=len(l)-1
		while start<end:
			triplet_sum=l[i]+l[start]+l[end]
			if triplet_sum==m:
				return triplet_sum
			if abs(m-triplet_sum)<diff:
				diff=abs(m-triplet_sum)
				ans=triplet_sum
			if triplet_sum>m:
				end-=1
			else:
				start+=1
	return ans
	

			
l=eval(input("enter list:-"))
m=int(input("enter target:-"))
print(triplet_closesttarget(l,m))				
	
	