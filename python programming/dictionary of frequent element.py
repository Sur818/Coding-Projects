def get_mostfreq(l):
	dict={}
	for x in set(l):
		f=l.count(x)
		dict[x]=f
	return dict
	
l=eval(input("enter item in list:-"))
print(get_mostfreq(l))
	
		