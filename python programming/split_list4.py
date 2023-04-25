res=[]
def split_list(l,k):
	global count
	for x in l:
		if type(x) is list:
			 split_list(x,k)
		else:
			res.append(x)
	return [list(res[i:i+k]) for i in range(0,len(res),k)]
			
		
			
			
l=eval(input("enter list:-"))
k=int(input("enter slpitting length:-"))
print(*split_list(l,k))
			
			
			