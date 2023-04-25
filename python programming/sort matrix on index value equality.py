def sort_indexvalueequality(l):
	return sorted(l,key=lambda x:len([ i for i in range(len(x)) if x[i]==i]))
	
	
l=eval(input("enter nested list:-"))
print(sort_indexvalueequality(l))
	