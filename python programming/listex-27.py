l=list(map(int,input("enter no:-").split(' ')))
if len(l)<2:
	print('None')
if len(l)==2 and l[0]==l[1]:
	print('None')
else:
	l=list(set(l))
	l.sort()
	print("second smallest element:-",l[1])
