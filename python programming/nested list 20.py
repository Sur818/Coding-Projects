from functools import reduce
import sys
def func(l):
	temp=-sys.maxsize-1
	for sub_list in l:
		prod=reduce((lambda x,y:x*y),sub_list)
		if prod>temp:
			res=sub_list
			temp=prod
		elif prod==temp and len(sub_list)>len(res):
			res=sub_list
	return res
			
		


l=eval(input("enter nested list:-"))
print("longest list of list whoose product is max:---")
print(func(l))

