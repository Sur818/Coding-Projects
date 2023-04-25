from functools import reduce
import sys
def func(l,m):
	diff=sys.maxsize
	for sub_list in l:
		prod=reduce((lambda x,y:x*y),sub_list)
		if abs(prod-m)<diff:
			res=sub_list
			diff=abs(prod-m)
		elif abs(prod-m)==diff and len(sub_list)>len(res):
			res=sub_list
	return res
			
		


l=eval(input("enter nested list:-"))
m=int(input("enter target:-"))
print("longest list of list whoose product is max:---")
print(func(l,m))

