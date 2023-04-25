def get_mostfreq(l):
	f=0
	for x in set(l):
		if l.count(x)>f:
			f=l.count(x)
			res=x
	return res
	
l=eval(input("enter item in list:-"))
print("most freq element present in list=",get_mostfreq(l))

	