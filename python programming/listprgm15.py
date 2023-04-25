k=1
def unique_sort(x):
	global k
	for data in x:
		if type(data)==type([]):
			unique_sort(data)
		else:
			k=sorted(x)
	return k		

		
l=[[[10,25,20]],[[2,1,0]],[[90,80,100]]]
l=[[unique_sort(x)] for x in l]
print(l)
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		