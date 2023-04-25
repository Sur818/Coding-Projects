l=list(map(int,input("enter no's in list1:--").split(' ')))
l.sort()
for i in range(len(l)):
	for j in range(i+1,len(l)):
		if l[i]!=l[j]:
			print(l[j],'is next greater of ',l[i])
			break