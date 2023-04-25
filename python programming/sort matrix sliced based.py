def sort_sliced(l,i,j):
	return sorted(l,key=lambda x:sum(x[i:j]))
	
l=eval(input("enter list:-"))
i,j=map(int,input("enter indexex:-").split(' '))
print(sort_sliced(l,i,j))