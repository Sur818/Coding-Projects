from operator import add
tup1=eval(input("enter data in tuple 1:-"))
tup2=eval(input("enter data in tuple2:-"))
ans=list(map(add,tup1,tup2))
print(ans)



""""""""""""""""""""""""""""""""""""
def add_tuple(tup1,tup2):
	res=[]
	for x,y in zip(tup1,tup2):
		res.append(x+y)
	return res

""""""""""""""""""""""""""""""""""""