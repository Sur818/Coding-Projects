def checksubset(list1,list2):
	return all(list(map(list1.__contains__,list2)))


list1=eval(input("enter nested list1:-"))
list2=eval(input("enter nested list 2:-"))
if checksubset(list1,list2):
	print("True")
else:
	print("False")

