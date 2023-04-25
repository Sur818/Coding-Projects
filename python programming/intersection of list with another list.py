#prgm nested list element present in another  list----->
#intersection of list with nested list
def Intersection(list1,list2):
	return [list(set(list1).intersection(set(x))) for x in list2]
	
	



list1=eval(input("enter data in list:-"))
list2=eval(input("enter nested list2"))
print(Intersection(list1,list2))







"""""""""""""""""""""""""""""""""""""""
def Intersection(list1,list2):
	res=[[i for i in item if i in list1] for item in list2]
	return res
	
	


list1=eval(input("enter data in list:-"))
list2=eval(input("enter nested list2"))
print(Intersection(list1,list2))

"""""""""""""""""""""""""""""""""""""""
