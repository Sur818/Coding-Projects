def length_list(l):
	if l==[]:
		return 0
	else:
		return 1+length_list(l[1:])

l=[10,20,30,40,50]
print(length_list(l))