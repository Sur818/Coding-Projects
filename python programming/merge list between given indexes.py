def merge_index(l,n1,n2):
	l[n1:n2]=["".join(l[n1:n2])]
	return l
	



l=eval(input("enter data in nested list:-"))
n1,n2=map(int,input("enter item range:-").split(' '))
print(merge_index(l,n1,n2))






""""""""""""""""""""""""""""
	for i in range(n1+1,n2):
		l[n1]+=l[i]
	
	l[n1+1:n2]=l[n2+1::]
	return l
""""""""""""""""""""""""""""
