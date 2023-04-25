def sort_hetrogenious(l):
	int_=sorted(i for i in l if type(i)==int)
	str_=sorted(i for i in l if type(i)==str)
	k=0
	j=0
	for i in range(len(l)):
		if type(l[i])==int:
			l[i]=int_[k]
			k+=1
		else:
			l[i]=str_[j]
			j+=1
	return l;







l=eval(input("enter herogenious data in list :-"))
print(sort_hetrogenious(l))

#""""""""""""""""""""""""""""""""""""""
#l=[31,11,22,40,60]
#res=sorted([i for i in l if i%2!=0],key=lambda x:int(str(x)[0]))
#print(res)

#""""""""""""""""""""""""""""""""""""""

