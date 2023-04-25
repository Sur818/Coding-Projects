def sort_inteager(l):
	int_=sorted(x for x in l if type(x)==int)
	k=0
	for i in range(len(l)):
		if type(l[i])==int:
			l[i]=int_[k]
			k+=1
	return l



l=eval(input("enter data in hetrolist:-"))
print(sort_inteager(l))