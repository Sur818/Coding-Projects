def checksubset(list1,list2):
	for x in list2:
		if x not in list1:
			return False
	return True


list1=eval(input("enter nested list1:-"))
list2=eval(input("enter nested list 2:-"))
if checksubset(list1,list2):
	print("True")
else:
	print("False")

