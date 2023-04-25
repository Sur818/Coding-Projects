import sys
def longest_ssmax(l):
	res=[-sys.maxsize-1]
	for x in l:
		if sum(x)>sum(res):
			res=x
		elif sum(x)==sum(res)and len(x)>len(res):
			res=x
	return res



l=eval(input("enter nested list:-"))
print("longest list of list whoose sum is max:-")
print(longest_ssmax(l))
