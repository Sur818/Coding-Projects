def check_subset(l1,l2):
	for i in range(len(l2)):
		f=0
		for j in range(len(l1)):
			if l2[i]==l1[j]:
				f=1
		if f==0:
			return False
	return True
	
	
l1=list(map(int,input("enter no's in list1:--").split(' ')))
l2=list(map(int,input("enter no's in  list2:--").split(' ')))
if check_subset(l1,l2):
	print("l2 is subset of l1:-")
else:
	print("l2 is not subset of l1:-")
