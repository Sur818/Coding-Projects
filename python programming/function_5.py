def add(a,b,c=0,*d,**e):
	print('a',a)
	print('b',b)
	print('c',c)
	print('d',d)
add(10,20,50,60,70,80,d=20)
#variable length argument kept in list
