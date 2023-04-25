def func(a):
	if a not in l2:
		return True
		
		
l1=input("enter no:-").split(' ')
l2=input("enter no want to delete:-").split(' ')
print("after deletion:-")
print(list(filter(func,l1)))

