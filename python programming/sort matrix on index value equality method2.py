def sort_indexvalueequality(l):
	return sorted(l,key=lambda x:len([ele for index,ele in enumerate(x) if index==ele]))
	
	
	
	
l=eval(input("enter nested list:-"))
print(sort_indexvalueequality(l))
	