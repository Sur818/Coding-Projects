def Union_list(list1,list2):
	return [list(set(list1).union(set(x))) for x in list2]
	
	



list1=eval(input("enter data in list:-"))
list2=eval(input("enter nested list2"))
print(Union_list(list1,list2))

