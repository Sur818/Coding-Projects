count=0
def func(l,k):
	if k>0:
		return func([l],k-1)
	return l

def split_list(l,n):
	global count
	if type(l[0]) is list:
		count+=1
		return split_list(l[0],k)
	else:
		res=func([list(l[i:i+n]) for i in range(0,len(l),n)],count-1)
		return res
	
		
		
l=eval(input("enter list:-"))
k=int(input("enter spliting length:-"))
print(split_list(l,k))
	