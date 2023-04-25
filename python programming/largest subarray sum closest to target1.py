#prgm to largest subarray whoose sum is closest to target:---->
import sys
def target_sum(l,m):
	diff=sys.maxsize
	res=[]
	for i in range(len(l)):
		sum=0
		for j in range(i,len(l)):
			sum+=l[j]
			if abs(sum-m)<diff:
				diff=abs(sum-m)
				res=l[i:j+1]
			if abs(sum-m)==diff and len(l[i:j+1])>len(res):
				res=l[i:j+1]
	return res


l=eval(input("enter list:-"))
m=int(input("enter target values:-"))
print(target_sum(l,m))	