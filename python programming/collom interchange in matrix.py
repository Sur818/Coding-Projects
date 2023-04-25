def interchange_collom(l,c1,c2):
	for x in l:
		x[c2],x[c1]=x[c1],x[c2]
	return l




l=eval(input("enter matrix:--"))
print("original list are:-",l)
c1,c2=map(int,input("enter colloms which want interchenge:-").split(' '))
print("after interchanging input colloms:-",interchange_collom(l,c1-1,c2-1))