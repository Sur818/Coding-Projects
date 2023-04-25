l=eval(input("enrer nested list:-"))
for k in range(len(l)-1):
	for x in l[k+1::]:
		for i in range(len(x)):
			l[k].insert(l[k][len(l[k])-1],x[i])
print(l)