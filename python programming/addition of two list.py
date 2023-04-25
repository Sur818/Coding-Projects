def add_list(l1,l2,n1,n2):
	if n1>n2:
		for i in range(n2):
			 l1[i]=l1[i]+l2[i]
		return l1
	else:
		for i in range(n1):
			 l2[i]=l2[i]+l1[i]
		return l2
	
l1=eval(input("enter list:-"))
l2=eval(input("enter list:-"))
print("addition of two list=",add_list(l1,l2,len(l1),len(l2)))
			
	