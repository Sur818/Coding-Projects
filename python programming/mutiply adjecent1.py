def multiply_adjecent(tup):
	res=list(map(lambda x,y:x*y,tup,tup[1::]))
	return tupmle(res)
	
tup=eval(input("enter element in list:-"))
print(multiply_adjecent(tup))
	