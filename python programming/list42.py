l=list(map(int,input("enter no's in list:--").split(' ')))
l1=[]
for i in range(len(l)):
	next_bigger=-1
	for j in range(i+1,len(l)):
		if l[j]>l[i]:
			next_bigger=l[j]
			break
	l1.append(next_bigger)
print(l1)
	