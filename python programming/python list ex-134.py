def diffrence_list(l1,l2):
	for x in l2:
		l1.remove(x) 
	return l1
		
		
l1=eval(input("enter list:-"))
l2=eval(input("enter list:-"))
print(diffrence_list(l1,l2))