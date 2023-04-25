l=[]
l1=list(map(int,input("enter no's in list1:--").split(' ')))
l2=list(map(int,input("enter no: in list2:--").split(' ')))
for x,y in zip(l1,l2):
	if x<y:
		l.append(x)
		l.append(y)
	else:
		l.append(y)
		l.append(x)
print(l)
