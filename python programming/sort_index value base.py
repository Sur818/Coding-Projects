def index_value(l):
	return len([x for x in enumerate(l) if x[0]==x[1]])




l=eval(input("enter list:-"))
l=sorted(l,key=lambda x:index_value(x))
print(l)