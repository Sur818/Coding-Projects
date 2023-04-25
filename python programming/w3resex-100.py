l1=eval(input("enter data in list1:-"))
l2=eval(input("enter data in list2:-"))
l3=eval(input("enter data in list3:-"))
print("common index value which are common are:---")
l=[]
for x,y,z in zip(l1,l2,l3):
	if x==y==z:
		l.append(x)
print(l)
	




