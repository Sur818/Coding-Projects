l=eval(input("enter nested list or integer in list:-"))
for x in l:
	print(x)
l=[x if type(x)==type(2) else tuple(x) for x in l ]
print(l)
		
		