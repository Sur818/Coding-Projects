l=eval(input("enter list of nested tuple:-"))
res=[]
temp=set()
for x in l:
	for y in x:
		if y not in temp:
			res.append(y)
			temp.add(y)
print(res)
