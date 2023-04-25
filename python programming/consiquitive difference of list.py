def consiquitive_diff(l):
	res=[l[i+1]-l[i] for i in range(len(l)-1)]
	return res

l=eval(input("enter data in list:-"))
print(consiquitive_diff(l))	

	
		

""""""""""""""""""""""""""""""""
list(map(lambda x,y:y-x,l,l[1::])
print(list)

""""""""""""""""""""""""""""""""	
