def check_common(l1,l2):
	for x in l1:
		if x in l2:
			return True
	return False



l1=input("enter data in list1:-").split(' ')
l2=input("enter data in list 2:-").split(' ')
f=check_common(l1,l2)
if f==True:
	print("True")
else:
	print("False")