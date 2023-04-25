def sort_odd(l):
	odd_no=sorted(i for i in l if i%2!=0)
	k=0
	for i in range(len(l)):
		if l[i]%2!=0:
			l[i]=odd_no[k]
			k+=1
	return l
			


l=list(map(int,input("enter inteager data in list:-").split(' ')))
print("sort only odd intaeger:-")
print(sort_odd(l))