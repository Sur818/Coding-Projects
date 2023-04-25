def sort_merge(l,part_l):
	for x in part_l:
		for i in range(len(l)):
			if x<l[i]:
				l.insert(i,x)
				break
	return l


l=list(map(int,input("enter no in list in sorted order:-").split(' ')))
part_l=list(map(int,input("enter no in part list:-").split(' ')))
print("after obsorbtion:-\n",(sort_merge(l,part_l)))
 



