def count_range_in_list(l,min,max):
	ctr=0
	for x in l:
		if min<=x<=max:
			ctr+=1
	return ctr
li=list(map(int,input("enter no:-").split(' ')))
min=int(input("enter lower bound:-"))
max=int(input("enter upper bound:-"))
print("no of element in given range:-",count_range_in_list(li,min,max))