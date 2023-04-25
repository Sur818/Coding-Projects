def alternate_el(l):
	return [l[i] for i in range(0,len(l),2)]
		
		

l=eval(input("enter data in list:-"))
print(alternate_el(l))