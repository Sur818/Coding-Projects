def insert_element(l,ele,pos):
	for i in range(0,len(l),pos+1):
		l.insert(i+pos,ele)
	return l
	
l=eval(input("enter list:-"))
ele=eval(input("enter element want to insert:-"))
pos=int(input("after which position:-"))
print(insert_element(l,ele,pos))
	
	
	