def swap_fldigit(l):
	res=[]
	for xo in l:
		x=str(x)
		x=x[-1]+x[1:len(x)-1]+x[0]
		res.append(x)
	return res


l=eval(input("enter list:-"))
print(swap_fldigit(l))
		
		