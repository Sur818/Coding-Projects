def add_twomatrixrowwise(l1,l2):
	return [x+y for x,y in zip(l1,l2)]

l1=eval(input("enter list1:-"))
l2=eval(input("enter list2:-"))
print(add_twomatrixrowwise(l1,l2))
		
		